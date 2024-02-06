
m=int(input("enter no of rows: "))
n=int(input("enter no of columns: "))
k=int(input("enter value of k: "))
A = []
B = []

def matrix(m, n):
    o = []
    for i in range(m):
        row = []
        for j in range(n):
            inp=int(input(f"Enter no of index [{i}][{j}]: "))   # "f_string" function is used...
            row.append(inp)
        o.append(row)
    return o
        
A = matrix(m, n)
print("The first matrix is: ",A)
B = matrix(m,n)
print("The second matrix is: ",B)

def sum(A, B):
    output = []
    for i in range(len(A)):
        row=[]
        for j in range(len(A[0])):
            row.append(A[i][j]+B[i][j])
        output.append(row)
    return output

sum_of_matrix=sum(A, B)
print("sum of the matrix A and B is: ",sum_of_matrix)

def subtract(A, B):
    output = []
    for i in range(len(A)):
        row=[]
        for j in range(len(A[0])):
            row.append(A[i][j]-B[i][j])
        output.append(row)
    return output

sub_of_matrix=subtract(A, B)
print("subtraction of the matrix A and B is: ",sub_of_matrix) 


def transpose(A):
    op = [[0 for i in range(m)] for j in range(n)]
    for i in range(len(A)):
        for j in range(len(A[0])):
            op[i][j]=A[j][i]
    return op

transA=transpose(A)
print("transpose of the matrix is: ",transA)

def multiply(m, n, k):
    output=[[0 for i in range(m)] for j in range(k)]
    for i in range(len(A)):
        for j in range(len(B[0])):
            for k in range(len(B)):
                output[i][j] +=A[i][k]*B[k][j]
    print(output)

mult_of_matrix=multiply(m, n, k)
print("multiplication of the two matrices A and B is: ",mult_of_matrix