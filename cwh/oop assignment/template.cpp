#include <iostream>
using namespace std;
int n;
template <class T>
class selection_sort
{

  T arr[n];

public:
  void input()
  {
    for (int i = 0; i < n; i++)
    {
      cout << "Enter a number: ";
      cin >> arr[i];
    }
  }

  void sort()
  {
    for (int i = 0; i < n; i++)
    {
      int index = i;
      for (int j = i + 1; j < n; j++)
      {
        if (arr[index] > arr[j])
          index = j;
      }
      T x = arr[index];
      arr[index] = arr[i];
      arr[i] = x;
    }
  }
  void display()
  {
    cout << "The array is" << endl;
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << ",";
    }
    cout << endl;
  }
};

int main()
{
  selection_sort<float> f;
  selection_sort<int> s;
  cout << "Enter length of array: ";
  cin >> n;
  cout << "Enter float array" << endl;
  f.input();
  f.display();
  cout << "Selection sort" << endl;
  f.sort();
  f.display();

  cout << "Enter integer array" << endl;
  s.input();
  s.display();
  cout << "Selection sort" << endl;
  s.sort();
  s.display();
}