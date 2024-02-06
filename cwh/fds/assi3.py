A = []
row_num1 = int(input("Enter the number of rows in the matrix 1: "))
column_num1 = int(input("Enter the number of columns in the matrix 1: "))
for x in range(0, row_num1):  # iterating through row number to get full matrix
    column1 = []
    for y in range(0, column_num1):  # iterating through column number for that row
        element = int(input("Enter the element to be added"))
        column1.append(element)
    A.append(column1)

print("Your required matrix is: ", A)

B = []
row_num2 = int(input("Enter the number of rows in the matrix \nNote: This must be same as first matrix:"))
column_num2 = int(input("Enter the number of columns in the matrix \nNote: *This must be same as first matrix:"))
if row_num2 != row_num1 or column_num2 != column_num1:
    print("You have entered wrong order! Please make sure both matrix have same order!")
    exit()   #We ensure same order for accurate results
else:
    for x in range(0, row_num2):  # iterating through row number to get full matrix
        column2 = []
        for y in range(0, column_num2):  # iterating through column number for that row
            element = int(input("Enter the element to be added"))
            column2.append(element)

        B.append(column2)

    print("Your required matrix is:", B)

add = []
for i in range(0, row_num2):
    column3 = []
    for j in range(0, column_num2):
        element = 0                     #We first create a matrix of zeroes of the same order
        column3.append(element)
    add.append(column3)

for x in range(0, row_num1):
    for y in range(0, column_num1):
        add[x][y] = A[x][y] + B[x][y]   #And replace the zeroes with the sum of the element at that position

print("The sum of the matrices is:")
for q in add:
    print(q)

subtract = []
for i in range(0, row_num2):
    column3 = []
    for j in range(0, column_num2):
        element = 0                              #Create a matrix of zeroes
        column3.append(element)
    subtract.append(column3)

for x in range(0, row_num1):
    for y in range(0, column_num1):
        subtract[x][y] = A[x][y] - B[x][y]      #Replace zeroes with difference at that position

print("The difference of the matrices is:")
for q in subtract:
    print(q)

transpose1 = []
for i in range(0, row_num1):
    column4 = []
    for j in range(0, column_num1):
        element = 0
        column4.append(element)                   #Create a matrix of zeroes
    transpose1.append(column4)

for x in range(0, row_num1):
    for y in range(0, column_num1):
        transpose1[x][y] = A[y][x]              #Interchange row and column at each position

print("The transpose of the first matrix is")
for p in transpose1:
    print(p)

def Multiplication():
    product = []                             #Create a row element of matrix
    for i in range(row_num1):
        column4 = []                         #Nest a column element inside matrix to create our ordered matrix
        for j in range(column_num2):
            multiple = 0                    #Create a variable called multiple and assign to 0
            for k in range(column_num2):
                multiple += A[i][k] * B[k][j]  #At each position, assign multiple to product at that spot and append to column
            column4.append(multiple)           #After each column is appended for the first row
        product.append(column4)                #Append row and shift to first column on next row
    print("Multiplication of the matrices is ")
    for i in range(row_num1):
        for j in range(column_num2):
            print(product[i][j], end=" ")       #Printing each element separated by a space to make it visible
        print()

Multiplication()