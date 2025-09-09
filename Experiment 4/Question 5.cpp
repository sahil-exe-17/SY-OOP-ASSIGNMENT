#include <iostream>
using namespace std;

class ClassB;  

class ClassA {
    int numA;

public:
    void accept() {
        cout << "Enter number for ClassA: ";
        cin >> numA;
    }

    friend void Greatest(ClassA a, ClassB b);
};

class ClassB {
    int numB;

public:
    void accept() {
        cout << "Enter number for ClassB: ";
        cin >> numB;
    }

    friend void Greatest(ClassA a, ClassB b);
};


void Greatest(ClassA a, ClassB b) {
    if (a.numA > b.numB) {
        cout << "\nGreatest Number = " << a.numA << " (from ClassA)" << endl;
    } else if (b.numB > a.numA) {
        cout << "\nGreatest Number = " << b.numB << " (from ClassB)" << endl;
    } else {
        cout << "\nBoth numbers are equal: " << a.numA << endl;
    }
}

int main() {
    ClassA objA;
    ClassB objB;

    objA.accept();
    objB.accept();

    Greatest(objA, objB);

    return 0;
}
