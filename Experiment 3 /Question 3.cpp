#include<iostream>
using namespace std;
class Student{
public:
int m1,m2,m3;
void input()
{
  cout<<"Enter marks for 3 subjects :";
cin>>m1>>m2>>m3;
}
float percentage()
{
  int total=m1+m2+m3;
return total/3.0;
}
};
};
int main()
{
  Student::Marks marks;
marks.input();
float percentage =marks.percentage();
cout<<"Percentage :"<<percentage<<endl;
return 0;
}
