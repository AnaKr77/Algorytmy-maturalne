#include <iostream>
#include <algorithm>
using namespace std;
int n,s;
int t[100];
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t[i];
    }
    cin>>s;
    sort(t,t+n);
    int lewo=1;
    int prawo =n;
    while(lewo<prawo)
    {
         
          int srodek=(lewo+prawo)/2;
          if(s>t[srodek])
          {
             lewo=srodek;
          }
          
           if(s<t[srodek])
          {
             prawo=srodek+1;
          }
          
           if(s==t[srodek])
          {
             cout<<"szukana znajduje sie w posortowanej tablicy na pozycji "<<srodek+1;
             break;
          }

    }
    
    return 0;
}
