#include <iostream>
using namespace std;

class Result2;  
class Result1 {
    float marks1;

public:
    void accept() {
        cout << "Enter marks for Result1: ";
        cin >> marks1;
    }

    void display() {
        cout << "Marks in Result1: " << marks1 << endl;
    }

    friend float average(Result1 r1, Result2 r2);
};

class Result2 {
    float marks2;

public:
    void accept() {
        cout << "Enter marks for Result2: ";
        cin >> marks2;
    }

    void display() {
        cout << "Marks in Result2: " << marks2 << endl;
    }

   
    friend float average(Result1 r1, Result2 r2);
};


float average(Result1 r1, Result2 r2) {
    return (r1.marks1 + r2.marks2) / 2.0;
}

int main() {
    Result1 r1;
    Result2 r2;

    r1.accept();
    r2.accept();

    r1.display();
    r2.display();

    cout << "\nAverage of two results = " << average(r1, r2) << endl;

    return 0;
}
