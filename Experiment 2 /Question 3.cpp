#include <iostream>
using namespace std;

class Staff {
    string name;
    string post;

public:
    void getData() {
        cout << "Enter Staff Name: ";
        cin >> name;
        cout << "Enter Post: ";
        cin >> post;
    }
};

int main() {
    Staff s[5];

    cout << "Enter details of 5 staff members:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nStaff " << i + 1 << ":\n";
        s[i].getData();
    }

    cout << "\nStaff members who are HOD:\n";
    for (int i = 0; i < 5; i++) {
        if (s[i].post() == "HOD" || s[i].post() == "hod" ) {
            cout << "Staff Name: " << s[i].Name() << endl;
        }
    }

    return 0;
}
