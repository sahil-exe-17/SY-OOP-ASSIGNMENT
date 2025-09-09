#include <iostream>
using namespace std;

class Account {
    int acc_no;
    float balance;

public:
    void getData() {
        cout << "Enter Account Number: ";
        cin >> acc_no;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void Interest() {
        {
            balance = balance + (balance * 0.10);  // adding 10% interest
        }

    void display() {
        cout << "Account No: " << acc_no << ", Balance: " << balance << endl;
    }
};

int main() {
    Account a[10];

    cout << "Enter details of 10 accounts:\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nAccount " << i + 1 << ":\n";
        a[i].getData();
    }

    cout << "\nAccounts with Balance >= 5000 (after adding 10% interest):\n";
    for (int i = 0; i < 10; i++) {
        if (a[i].Balance() >= 5000) {
            a[i].addInterest();
            a[i].display();
        }
    }

    return 0;
}

