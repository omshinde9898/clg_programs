'''a)Write a Python program to store roll numbers of student in array who attended a training program in random order.Write function for searching whether particular student attended training program or not, using linear search and sentinel search
b) Write a Python program to store roll numbers of student array who attended training program in sorted order.Write function for searching whether particular student attended training program or not,using binary search and fibonacci search.'''
a=[10,53,66,18,12,34,0,15,2,45]
sorted_List=[0,2,10,12,15,18,34,45,53,66]

def linear_ser():
    x=int(input("Enter the roll no"))
    index=0
    for i in a:
        if i==x:
            print("Student have Attended Training")
            print("At index",index)
        else:
            index+=1
    if(index==len(a)):
        print("Student Not attended training")
def sentinel():
          size=len(a)
          key=int(input("Enter the element to be searched"))
          a.append(key)
          i=0
          while(a[i]!=key):
            i+=1
          if(i==size):
             return None
          else:
             print("key found at index",i)
def binary_search():
    n=int(input("Search element:"))
    first=0
    last=len(a)-1
    mid=0
    while(first <= last):
        mid=int((first+last)/2)
        if(n==sorted_List[mid]):
            print("Search element found at index",mid)
            break
        elif(n>sorted_List[mid]):
            first=mid+1
        else :
            last =mid-1
fibo = [ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34]
def fibonacci_Search():
    print("\n Sorted List: ", sorted_List)
    print("\n Fibonacci Series: ", fibo)
    key = int(input("\n\t Enter Roll No to search: "))
    k = 0 #....... To find fibo(k) >= Size of Sorted List
    while fibo[k] < len(sorted_List):
        k += 1   #....... Offset = -1
        offset = -1
    while k > 0: #.......Find index i = min((offset + fibo[k-2]) , size-1)
        i = min((offset + fibo[k-2]) , len(sorted_List)-1)
        if key == sorted_List[ i ]:
            print("\t Student Have Attended Training Program.")
            print("At index =",i)
            break
        elif key > sorted_List[ i ]:
            k = k-1
            offset = i
        else:
            k = k - 2
        if k <= 0:
            print("\t Student Have Not Attended Training Program.")
         
choice = 0
while(choice <= 4):  
    print("\n--------** MENU **--------")
    print("\t 1. Linear Search")    
    print("\t 2. Sentinel Search")
    print("\t 3. Binary Search")
    print("\t 4. Fibonacci Search")
    print("\t 5. STOP/EXIT")
    choice = int(input("\n\t Enter your Choice(1/2/3/4): "))
    if choice == 1:
        linear_ser()
    elif choice == 2:
        sentinel()
    elif choice == 3:
        binary_search()
    elif choice == 4:
        fibonacci_Search()
    else :
        exit(0)

