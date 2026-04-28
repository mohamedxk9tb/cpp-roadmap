#include <iostream>
using namespace std;

class Account {
protected:
    int balance;

public:
    void setBalance(int b){
        if(b >= 0){
            balance = b;
        }
    }

    void deposit(int amount){
        balance += amount;
    }

    void withdraw(int amount){
        if(amount <= balance){
            balance -= amount;
        } else {
            cout << "Insufficient balance\n";
        }
    }

    void display(){
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
public:
    void addInterest(){
        balance += balance * 0.1;
    }
};

int main() {
    SavingsAccount acc;

    int balance;
    cout << "Enter initial balance: ";
    cin >> balance;

    acc.setBalance(balance);

    acc.deposit(100);
    acc.withdraw(50);

    acc.addInterest();

    acc.display();

    return 0;
}