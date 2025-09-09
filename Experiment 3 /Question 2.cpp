#include <iostream>
using namespace std;

class Student {
    int roll_no;
    float percentage;

public:
    void accept(){
        cout<<"Enter Roll Number :";
      cin>>this->roll_no;
      cout<<"Enter Percentage :";
      cin>>this->percentage;
    }

    void display() {
        cout << "Roll No: " << this->roll_no << endl;      
        cout << "Percentage: " << this->percentage << "%" << endl;
    }
};

int main() {
    Student s;
  s.accept();
  s.display();
    return 0;
}
