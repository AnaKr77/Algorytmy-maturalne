#include <iostream>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;
bool czyspacja(char znak)
{
    return znak==' ';
}
bool czyliczba(char znak)
{
    if(znak>='0'&&znak<='9')return true;
    return false;
}
bool czyznak(char znak)
{
    return znak=='+'||znak=='-'||znak=='/'||znak=='*'||znak=='^';
}
int oblicz(int n1,int n2,char znak)
{
    if(znak=='+') return n1+n2;
    if(znak=='-') return n1-n2;
    if(znak=='*') return n1*n2;
    if(znak=='/') return n1/n2;
    if(znak=='^') return pow(n1,n2);
    return 0;

}
int oblicz_wyrazenie_ONP(string wyrazenieONP)
{
    stack<int>stos;
    string liczba="";
    for(int i=0;i<wyrazenieONP.length();i++)
    {
        if(!czyspacja(wyrazenieONP[i]))
        {
            if(czyliczba(wyrazenieONP[i]))
            {
                liczba+=wyrazenieONP[i];
            }
            else if(czyznak(wyrazenieONP[i]))
            {
                int liczba1=(stos.top());
                stos.pop();
                int liczba2=(stos.top());
                stos.pop();
                stos.push(oblicz(liczba2,liczba1,wyrazenieONP[i]));
            }
        }
        if(czyspacja(wyrazenieONP[i])&&liczba!="")
        {
            stos.push(stoi(liczba));
            liczba="";
        }

    }
    return stos.top();
}
int main()
{
    string wyrazenieONP;
    getline(cin, wyrazenieONP);
    cout << oblicz_wyrazenie_ONP(wyrazenieONP);
    return 0;
}
