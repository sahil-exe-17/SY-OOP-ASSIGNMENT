#include<iostream>
using namespace std;
class number{
    int x,y;
    public:
    number(int a)
    {
        x=a;
        y=0;
    }
    number(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"X="<<x<<endl;
        cout<<"Y="<<y<<endl;
    }
};
int main()
{
    number n1(50);
    number n2(10,20);
    n1.display();
    n2.display();
    return 0;
}
