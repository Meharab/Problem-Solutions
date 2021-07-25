#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if(a>b&a>c)
        {
            if(b>c)
            {
                cout<<"Case "<<i<<": "<<b<<endl;
            }
            else
            {
                cout<<"Case "<<i<<": "<<c<<endl;
            }
        }
        if(b>a&b>c)
        {
            if(a>c)
            {
                cout<<"Case "<<i<<": "<<a<<endl;
            }
            else
            {
                cout<<"Case "<<i<<": "<<c<<endl;
            }
    }
    if(c>a&c>b)
        {
            if(a>b)
            {
                cout<<"Case "<<t<<":"<<a<<endl;
            }
            else
            {
                cout<<"Case "<<t<<":"<<b<<endl;
            }
        }
    }
}
