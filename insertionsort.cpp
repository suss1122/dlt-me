#include <iostream>
using namespace std;

void Insertion(int A[], int N)
{
    for(int i=1; i<N; i++)
    {
        int j = i-1;
        int temp = A[i];
        while(j>-1 && A[j]>temp)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
    }
}

int main()
{
    int A[] = {34,65,1,28,96};
    int N = sizeof(A)/sizeof(A[0]);
    return 0;
}