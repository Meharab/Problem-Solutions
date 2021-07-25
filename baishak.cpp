#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    for(int i=1;i<=2000;i++)
    {
        //cin.getline(a,14);
       // scanf("%s",a);
       cin>>a;
        if(a=="HELLO")
            cout<<"Case "<<i<<": ENGLISH"<<endl;
        else if(a=="HOLA")
            cout<<"Case "<<i<<": SPANISH"<<endl;
       else if(a=="HALLO")
            cout<<"Case "<<i<<": GERMAN"<<endl;
       else if(a=="BONJOUR")
            cout<<"Case "<<i<<": FRENCH"<<endl;
       else if(a=="CIAO")
            cout<<"Case "<<i<<": ITALIAN"<<endl;
        else if(a=="ZDRAVSTVUJTE")
            cout<<"Case "<<i<<": RUSSIAN"<<endl;
        else if(a=="#")
            break;
        else
            cout<<"Case "<<i<<": UNKNOWN"<<endl;
    }
    return 0;
}
