def Palindrome():
    str1=input("Enter the required word")
    str2=str1[::-1]                         
    if(str1==str2):
        print("Word is a palindrome")
    else:
        print("Word is not a palindrome")


def Freq_char():
    count=0
    length=0
    print("Enter the string:\n")
    str1=str(input())                     
    for i in str1:
        length+=1                          
    key=str(input("Enter the character whose frequency is to be found\n"))
    for x in range(length):
        if str1[x]==key:     
            count+=1
    print("The frequency of "+key+" is:",count)


def Substring_index():
    count1=0
    count2=0
    str1=str(input("Enter the required string\n"))
    for i in str1:
        count1+=1        
    key=str(input("Enter the substring\n"))
    for j in key:
        count2+=1         
    var1=0
    for x in range(count1):
        b=str1[var1:count2]    
        var1+=1
        count2+=1
        if(b==key):           
            print(x)             
            break


def Longest_word():
    print("Enter the required string")
    count_main = 0
    str1 = ""         
    list_count = 0   
    list1 = []
    main = str(input())
    main = main + " "
    for x in main:
        count_main += 1        
    for j in range(count_main):
        if (main[j] == " "):     
            list1.append(str1)
            str1 = ""
        else:
            str1 = str1 + main[j]
    for q in list1:
        list_count += 1             
    k = ''
    longest = 0
    for c in range(0, list_count):
        count = 0
        str2 = list1[c]
        for p in str2:
            count += 1      
        if (count > longest):  
            longest = count
            k = c
    print(list1[k])


def Word_Frequency():
    print("Enter the required string")
    count_main = 0
    list1 = []
    main = str(input())
    main = main + " "
    str1=""
    for x in main:
        count_main += 1
    for j in range(count_main):
        if (main[j] == " "):
            list1.append(str1)
            str1 = ""
        else:
            str1 = str1 + main[j]
    counter={}     
    for word in list1:
        if word in counter:    
            counter[word]+=1
        else:
            counter[word]=1   
    print(counter)


Palindrome()
Freq_char()
Substring_index()
Longest_word()
Word_Frequency()