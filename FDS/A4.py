'''Write a Python program that computes the net amount of a bank account based a transaction
log from console input. The transaction log format is shown as following: D 100 W 200
(Withdrawal is not allowed if balance is going negative. Write functions for withdraw and
deposit) D means deposit while W means withdrawal.
Suppose the following input is supplied to the program:
D 300, D 300 , W 200, D 100 Then, the output should be: 500'''
def deposit(balance,trans_no):
    amount = float(input("Enter amount to be deposited: "))
    if balance>=0:
        a.append("Deposit")
        b.append(amount)
        trans_no=trans_no+1
        balance =balance+amount
    print("\n Amount Deposited:", amount)
    return balance
def withdraw(balance,trans_no):
    amount = float(input("Enter amount to be withdrawn: "))
    if balance >= amount:
        a.append("Withdraw")
        b.append(amount)
        trans_no=trans_no+1
        balance =balance- amount
        print("\n You Withdrew:", amount)
    else:
        print("\n Insufficient balance!! ")
    return balance
def display(balance):
    print("\n Current Available Balance:", balance)
def display_book(a,b):
    print("\n-------------BANK TRANSACTION LOG-------------")
    for i in range(len(a)):
        print(a[i],"\t",b[i])
        print("\n")
balance=0
trans_no=0
ch=0
a=[]
b=[]
print("BANK TRANSACTION LOG ")
print("1.DEPOSIT\n2.WITHDRAW\n3.DISPLAY BALANCE\n4.BANK TRANSACTION LOG BOOK\n5.EXIT")
while(ch<5):
    print("ENTER YOUR CHOICE: ")
    ch=int(input())
    if ch==1:
        balance=deposit(balance,trans_no)
    elif ch==2:
        balance=withdraw(balance,trans_no)
    elif ch==3:
        display(balance)
    elif ch==4:
        display_book(a,b)
    else:
        print("Enter valid choice")
        exit(0)