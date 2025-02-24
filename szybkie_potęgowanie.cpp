
#include <iostream>
using namespace std;

int szybkie_potegowanie(int a, int b)
{
    int w=1;
    int c=a;
    while(b>0)
    {
        int bit=b%2;
        b=b/2;
        if(bit==1)
        {
            w=w*c;
        }
        c=c*c;
    }
    return w;
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<szybkie_potegowanie(x,n);
    

    return 0;
}
