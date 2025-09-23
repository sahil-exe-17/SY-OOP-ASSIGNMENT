#include<iostream>
using namespace std;
class Sum{
    int n;
    int sum=0;
    public:
    Sum(int num)
    {
        n=num;
        for(int i=0;i<=n;i++)
        {
            sum+=i;
        }
    }
    void display()
    {
        cout<<"\n Sum :"<<sum<<endl;
    }
};
int main()
{
    Sum s1(10);
    s1.display();
    return 0;
}
    
