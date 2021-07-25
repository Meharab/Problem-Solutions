#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,temp;
    cout<<"enter 2 nmber (a>b) : "<<endl;
    cin>>a>>b;
    while(b!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    cout<<"GCD is : "<<a<<endl;
}
