list=[]
n=int(input("Enter number of students "))
for i in range (n):
    a=int(input("Enter roll no:"))
    list.append(a)
    i+=1
print(list)
#linear search
def linear_search():
    key=int(input("Enter Roll No to find:"))
    for j in range (n):
        if(list[j]==key):
            print("Student attended training")
            break
        else:
            print(" Student not attended training")
            break
linear_search() 

#sentinel search
key=int(input("Enter roll to find:"))
def sentinel_search():
    last=list[n-1]
    list[n-1]=key
    list[n-1]=last
    for k in range (n):
        if((i<n-1) or key==list[n-1]):
            print("Student attended ")
            break
        else:
            print("Student Not Attended")
            break
    print(list)
sentinel_search()