#include<iostream>
using namespace std;
class sum{
    int n=10;
    int result=0;

public:
sum()
{
    for(int i=1;i<n;i++)
    result +=i;
}
void display()
{
    cout<<"\n Sum of Numbers from 1 to n is :"<<result<<endl;
}
};
int main()
{
    sum s;
    s.display();
    return 0;
}
