# Function for accepting the percentage of the Students

def input_percentage():
    perc = []
    n = int(input("Enter the number of Students : "))
    for i in range(n):
        perc.append(float(input("Enter the percentage of Student {0} : ".format(i+1))))
    return perc

# Function for printing the percentage of the Students

def print_percentage(perc):
    for i in range(len(perc)):
        print(perc[i],sep = "\n")

# Function for performing partition of the Data

def percentage_partition(perc,start,end):
    pivot = perc[start]
    lower_bound = start + 1
    upper_bound = end

    while True:
        while lower_bound <= upper_bound and perc[lower_bound] <= pivot:
            lower_bound += 1

        while lower_bound <= upper_bound and perc[upper_bound] >= pivot:
            upper_bound -= 1

        if lower_bound <= upper_bound:
            temp=perc[lower_bound]
            perc[lower_bound]=perc[upper_bound]
            perc[upper_bound]=temp

        else:
            break

    temp=perc[start]
    perc[start]=perc[upper_bound]
    perc[upper_bound]=temp

    return upper_bound

# Function for performing Quick Sort on the Data

def Quick_Sort(perc,start,end):
    while start < end:
        partition = percentage_partition(perc,start,end)
        Quick_Sort(perc,start,partition-1)
        Quick_Sort(perc,partition+1,end)
        return perc

# Function for Displaying Top Five Percentages of Students

def display_top_five(perc):
    print("Top Five Percentages are : ")
    if len(perc) < 5:
        start, stop = len(perc) - 1, -1
    else:
        start, stop = len(perc) - 1, len(perc) - 6

    for i in range(start, stop, -1):
        print(perc[i],sep = "\n")

# Main

unsorted_percentage = []
sorted_percentage = []

unsorted_percentage = input_percentage()
print("Unsorted percentage list:")
print_percentage(unsorted_percentage)

sorted_percentage = Quick_Sort(unsorted_percentage,0,len(unsorted_percentage)-1)
print("The sorted list is: ")
print_percentage(sorted_percentage)

display_top_five(sorted_percentage