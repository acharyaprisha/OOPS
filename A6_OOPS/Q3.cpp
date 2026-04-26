#include<iostream>
#include<string>
using namespace std;

class Account{
private:
    const long accountno;
    static long transactionid;
    string type;
    double balance;

public:
    Account(const long accno, double initialBalance)
        : accountno(accno), balance(initialBalance){
        type = "none";
    }

    long depositAmount(const long to, const long from, const double amount){
        if(accountno == to){
            balance += amount;
            type = "credit";
            transactionid++;
        }
        return transactionid;
    }

    long creditAmount(const long to, const long from, const double amount, Account &receiver){
        if(accountno == from){
            if(amount > balance){
                cout << "Insufficient balance" << endl;
                return transactionid;
            }

            balance -= amount;
            type = "debit";
            transactionid++;

            receiver.balance += amount;
            receiver.type = "credit";
            receiver.transactionid = transactionid;
        }
        return transactionid;
    }

    void displayDetails() const{
        cout << "\nAccount number: " << accountno << endl;
        cout << "Balance: " << balance << endl;
        cout << "Transaction ID: " << transactionid << endl;
        cout << "Type: " << type << endl;
    }
};

long Account::transactionid = 200000;

int main() {
    Account acc1(101, 5000);
    Account acc2(102, 3000);
    Account acc3(103, 7000);
    Account acc4(104, 2000);
    Account acc5(105, 10000);

    acc1.depositAmount(101, 102, 1000);

    acc1.creditAmount(102, 101, 1500, acc2);
    acc3.creditAmount(104, 103, 2000, acc4);
    acc5.creditAmount(101, 105, 2500, acc1);

    acc1.displayDetails();
    acc2.displayDetails();
    acc3.displayDetails();
    acc4.displayDetails();
    acc5.displayDetails();

    return 0;
}