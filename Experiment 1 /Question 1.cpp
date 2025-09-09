#include <iostream>
#include<string>
using namespace std;

class student
{
  int Roll_no;
  string name;
public:
  void accept()
  {
    cout<<"Enter name and roll no :";
    cin>>name>>Roll_no;
  }
  void display()
  {
    cout<<"Name:"<<name<<endl;
    cout<<"Roll No :"<<Roll_no<<endl;
  }
};

int main()
{
  student s1;
  s1.accept();
  s1.display();
  return 0;
}
