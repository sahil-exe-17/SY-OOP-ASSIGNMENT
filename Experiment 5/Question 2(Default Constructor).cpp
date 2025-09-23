
#include<iostream>
using namespace std;
class student{
    string name; 
    float per;
    public:
    student()
    {
        name="abc";
        per=98.5;
    }
    void display()
    {
        cout<<"\n Name of student and Percentage is :"<<name<<endl<<per<<endl;
    }
};
int main()
{
    student s1;
    s1.display();
    return 0;
}
