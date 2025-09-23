#include<iostream>
using namespace std;
class student{
   string name;
   float percentage;
   public:
   student(string n,float p)
   {
       name=n;
       percentage=p;
   }
   student(const student &s)
   {
       name=s.name;
       percentage=s.percentage;
   }
   void display()
   {
       cout<<"Name:"<<name<<endl;
       cout<<"Percentage :"<<percentage<<"%";
   }
};
int main()
{
    string n;
    float p;
    cout<<"Enter student name :";
    getline(cin,n);
    cout<<"Enter Percentage :";
    cin>>p;
    student s1(n,p);
    student s2(s1);
    cout<<"\n Student Data "<<endl;
    s2.display();
    return 0;
}
