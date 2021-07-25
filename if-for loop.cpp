#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    if(n>0)
    {
        for(int i=0;i<n;i++)
            cout<<i<<endl;
    }
    else
        for(int i=n;i<0;i++)
        cout<<i<<endl;
}
