#include <iostream>
using namespace std;

class college {
    int roll_no;
    string name;
    string course;

public:

    college(int r, string n, string c = "Computer Science") {
        roll_no = r;
        name = n;
        course = c;
    }

    void display() {
        cout << "Roll No : " << roll_no << endl;
        cout << "Name    : " << name << endl;
        cout << "Course  : " << course << endl;
    }
};

int main() {
    int r1, r2;
    string n1, n2;

    cout << "Enter Roll no and name for first student: ";
    cin >> r1 >> n1;

    cout << "Enter Roll no and name for second student: ";
    cin >> r2 >> n2;

    college s1(r1, n1);
    college s2(r2, n2);

    cout << "\nDetails of students:\n";
    s1.display();
    s2.display();

    return 0;
}
