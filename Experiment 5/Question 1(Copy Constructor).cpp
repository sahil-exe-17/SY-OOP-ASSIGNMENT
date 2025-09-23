#include<iostream>
using namespace std;
class Sum{
    int n;
    int sum=0;
    public:
    Sum()
    {
        n=4;
    }
    Sum(Sum &obj)
    {
        n=obj.n;
        int i;
        for(i=1;i<=n;i++)
        {
            sum+=i;
        }
        cout<<"\n Sum="<<sum;
    }
};
int main()
{
    Sum s1;
    Sum s2(s1);
    return 0;
}
