#include <iostream>
using namespace std;

class Book {
    string book_title;
    string author_name;
    float price;

public:
    void accept() {
        cout << "Enter Book Title: ";
        cin >> book_title;
        cout << "Enter Author Name: ";
        cin >> author_name;
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "Title: " << book_title << endl;
        cout << "Author: " << author_name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b;         
    Book *ptr;      
    ptr = &b;       
    cout << "Enter details of the book:\n";
    ptr->accept();   
    ptr->display();  

    return 0;
}
