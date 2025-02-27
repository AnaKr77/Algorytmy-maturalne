
#include <iostream>
using namespace std;
int nwd(int a, int b)
{
    if(b==0) return a;
    return nwd(b,a%b);
}
int a,b;
int main()
{
    cin>>a>>b;
    cout<<nwd(a,b);
   
    return 0;
}
