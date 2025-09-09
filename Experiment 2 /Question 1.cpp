#include <iostream>
using namespace std;

class City {
    string name;
    int population;

public:
    void getData() {
        cout << "Enter city name: ";
        cin >> name;
        cout << "Enter population: ";
        cin >> population;
    }
};

int main() {
    City c[5];
    cout << "Enter details of 5 cities:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nCity " << i + 1 << ":\n";
        c[i].getData();
    }

    int max = 0;
    for (int i = 1; i < 5; i++) {
        if (c[i].getPopulation() > c[max].getPopulation()) {
            
        }
    }

    cout << "\nCity with highest population:\n";
    c[maxIndex].display();

    return 0;
}
