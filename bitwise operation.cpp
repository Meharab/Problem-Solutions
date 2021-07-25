#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c;
    cin>>a>>b;
    c=~b;
    cout<<c<<endl;
    c=b|a;
    cout<<c<<endl;
    c=a&b;
    cout<<c<<endl;
    c=!a;
    cout<<c<<endl;
    c=a^b;
    cout<<c<<endl;
    c=a<<=1;
    cout<<c<<endl;
    c=b>>=1;
    cout<<c<<endl;
}
