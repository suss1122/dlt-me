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
    i=0
    list.append(key)
    while(list[i]!=key):
        i=i+1
    if (i==n):
        print("Student not attended training.")
    else:
        print("Student attended training.")
sentinel_search()