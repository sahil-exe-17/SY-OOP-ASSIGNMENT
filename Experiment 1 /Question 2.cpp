#include<iostream>
#include<string>
using namespace std;

class Book {
public:
    string b_name;
    int b_price;
    int b_pages;

    void accept() {
        cout << "Enter book name, price and pages: ";
        cin >> b_name >> b_price >> b_pages;
    }

    void display() {
        cout << "Book name: " << b_name << endl;
        cout << "Book Price: " << b_price << endl;
        cout << "No of pages: " << b_pages << endl;
    }
};

int main() {
    Book b1, b2;

    b1.accept();
    b2.accept();

    if (b1.b_price > b2.b_price) {
        b1.display();
    } else {
        b2.display();
    }

    return 0;
}
