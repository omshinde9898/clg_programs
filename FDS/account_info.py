class bank_Account:
    def __init__(self,acc_no,balance,transactions) -> None:
        self.acc_no = acc_no
        self.balance = balance
        self.transactions = transactions

    def withdrawl(self):
        value = float(input("Amount to be Withdrawn : "))
        if self.balance == 0 or self.balance < value:
            print("---NOT ENOUGH BALANCE---")
        else:
            self.balance = self.balance - value
            self.transactions.append(["Withdrawn",value,self.balance])

    def deposite(self):
        value = float(input("Amount of Deposite : "))
        self.balance = self.balance + value
        self.transactions.append(["Deposite",value,self.balance])

    def show_bal(self):
        print("\nCurrent Account Balance : ",self.balance,"\n")

    def show_log(self):
        print("\nAction       Amount      Balance")
        for i in self.transactions:
            print(i[0],"    ",i[1],"    ",i[2])
        print("\n")


def basic_op(acc):
    print("\n--- Choose Action ---")
    print("Deposite         : 1")
    print("Withdraw         : 2")
    print("Check balance    : 3")
    print("View Log         : 4")
    print("Exit             : 5")
    inp_act = int(input(" : "))
    if inp_act == 1:
        acc.deposite()
    elif inp_act == 2:
        acc.withdrawl()
    elif inp_act == 3:
        acc.show_bal()
    elif inp_act == 4:
        acc.show_log()
    elif inp_act == 5:
        exit()
    else:
        print("CHOOSE VALID OPTIONS\n")

acc = bank_Account(123456,0,[])
while True:
    basic_op(acc)

    
    