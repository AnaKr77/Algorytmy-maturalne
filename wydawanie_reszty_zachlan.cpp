
#include <iostream>
using namespace std;
int T[6]={500,200,100,50,20,10};
int K[6];
int main()
{
    int R;
    cin>>R;
    int i=0;
    while(R>0)
    {
        K[i]=R/T[i];
        R=R%T[i];
        i++;
    }
    for (int j = 0; j < 6; j++)
    {
        cout<<T[j]<<" x "<<K[j]<<endl;
    }

    return 0;
}
