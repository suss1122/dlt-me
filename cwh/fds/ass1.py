marks=[]
n=int(input("Enter the total no. of students: "))
for i in range (n):
    x=int(input("Enter the marks(Enter '-1' if absent):"))
    marks.append(x)
print("List of marks:",marks)

def average_marks():
    sum=0
    for i in range (n):
        sum=sum + marks[i]
    average= (sum/n)
    print("The average score is: ",average)


def max_marks():
    max=marks[0]
    for i in range (n):
        if(marks[i]>max):
            max= marks[i]
    print("The maximum marks is : ", max)

def min_marks():
    min=marks[0]
    for i in range (n):
        if(marks[i]<min):
            min= marks[i]
    print("The maximum marks is : ", min)

def absent():
    abs=0
    for i in range(n):
        if(marks[i]== -1):
            abs=abs+1
    print("No.of absent students: ", abs)

def frequency():
    b=0
    for i in range(n):
        count=0
        j=i+1
        for j in range(n):
            if(marks[i]==marks[j]):
                count=count+1
        if(count>b):
            b=count
            num=marks[i]
    print("Highest frequency marks: ",num)

average_marks()
max_marks()
min_marks()
absent()
frequency()