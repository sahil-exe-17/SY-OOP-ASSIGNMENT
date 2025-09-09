#include <iostream>
using namespace std;

class Number {
    int value;

public:
    void accept() {
        cout << "Enter a number: ";
        cin >> value;
    }

    void display() {
        cout << value << endl;
    }
    friend void swap(Number &x, Number &y);
};
void swap(Number &n1, Number &n2) {
    int temp = x.value;
    x.value = y.value;
    y.value = temp;
}

int main() {
    Number n1, n2;

    cout << "Enter value for first object:\n";
    n1.accept();
    cout << "Enter value for second object:\n";
    n2.accept();

  
    swap(n1, n2);

    cout << "\nAfter Swapping:\n";
    cout << "First number: "; n1.display();
    cout << "Second number: "; n2.display();

    return 0;
}
