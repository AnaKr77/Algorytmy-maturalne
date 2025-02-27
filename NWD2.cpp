
#include <iostream>
using namespace std;
int a,b,r;
int main()
{
    cin>>a>>b;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
   
        cout<<a;
   
    return 0;
}
