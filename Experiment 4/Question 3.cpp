#include <iostream>
using namespace std;

class ClassB;  

class ClassA {
    int numA;

public:
    void accept() {
        cout << "Enter value for A: ";
        cin >> numA;
    }

    void display() {
        cout << "Value in ClassA: " << numA << endl;
    }
    friend void swap(ClassA &x, ClassB &y);
};

class ClassB {
    int numB;

public:
    void accept() {
        cout << "Enter value for ClassB: ";
        cin >> numB;
    }

    void display() {
        cout << "Value in ClassB: " << numB << endl;
    }

    friend void swap(ClassA &x, ClassB &y);
};

void swap(ClassA &a, ClassB &b) {
    int temp = x.valueA;
    x.valueA = y.valueB;
    y.valueB = temp;
}

int main() {
    ClassA objA;
    ClassB objB;

    objA.accept();
    objB.accept();
    swapValues(objA, objB);

    cout << "\nAfter Swapping:\n";
    objA.display();
    objB.display();

    return 0;
}
