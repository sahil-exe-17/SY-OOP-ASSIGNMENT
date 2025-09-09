#include <iostream>
using namespace std;

class Number {
    int value;

public:
    void accept() {
        cout << "Enter Value: ";
        cin >> value;
    }

    void display() {
        cout << value << endl;
    }

    void swap(Number &n) {
        int temp = value;
        value = n.value;
        n.value = temp;
    }
};

int main() {
    Number n1, n2;

    cout << "Enter value for first object:\n";
    n1.accept();
    cout << "Enter value for second object:\n";
    n2.accept();
    n1.swap(n2);

    cout << "\nAfter Swapping:\n";
    cout << "First number: "; n1.display();
    cout << "Second number: "; n2.display();

    return 0;
}
