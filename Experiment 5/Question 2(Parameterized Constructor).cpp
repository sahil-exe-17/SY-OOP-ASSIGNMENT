#include<iostream>
using namespace std;
class student{
    float per;
    string name;
    public:
student(float p, string n )
{
    per=p;
    name =n;
}
void display()
{
    cout<<"\n Percentage :"<<per<<endl;
    cout<<"\n Name :"<<name;
}
};
int main()
{
    student s1(99,"abc");
    s1.display();
    return 0;
}
