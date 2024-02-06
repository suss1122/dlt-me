# Function for Selection Sort of elements

def Selection_Sort(marks):
    for i in range(n):
        min_idx = i
        for j in range(i + 1, n):
            if marks[min_idx] > marks[j]:
                min_idx = j
        temp = marks[i]
        marks[i] = marks[min_idx]
        marks[min_idx] = temp

    print("Marks of students after performing Selection Sort on the list : ")
    for i in range(len(marks)):
        print(marks[i])

# Function for Bubble Sort of elements

def Bubble_Sort(marks):
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if marks[j] > marks[j + 1]:
                temp = marks[j]
                marks[j] = marks[j + 1]
                marks[j+1] = temp
    print("Marks of students after performing Bubble Sort on the list :")
    for i in range(len(marks)):
        print(marks[i])

# Function for displaying top five marks

def top_marks(marks):
    print("Top",len(marks),"Marks are : ")
    print(*marks[::-1], sep="\n")

# Main code_____

marks=[]
n = int(input("Enter number of students whose marks are to be displayed : "))
print("Enter marks for",n,"students : ")
for i in range(0, n):
    ele = float(input())
    marks.append(ele)  # adding the element

print("The marks of",n,"students are : ")
print(marks)

print("----Selection Sort----")
Selection_Sort(marks)

print("----Bubble Sort----")
Bubble_Sort(marks)

print("----Top Marks----")
top_marks(marks)