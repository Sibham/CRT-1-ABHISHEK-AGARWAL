#include<iostream>
using namespace std;

class bankAccount {

private:
    int balance;

public:

    // Setter Function
    void setBalance(int amount) {

        if(amount >= 0) {
            balance = amount;
        }
        else {
            cout << "Enter a Valid Number";
        }
    }

    // Getter Function
    int getBalance() {
        return balance;
    }
};

int main() {

    bankAccount obj1;

    obj1.setBalance(5000);

    cout << "Balance : " << obj1.getBalance();

    return 0;
}
