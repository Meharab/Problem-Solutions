#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,a[1024],c[1024];
    cin>>n;
    for(int i=0;i<1024;i++)
        c[i]=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c[a[i]]++;
    }
    for(int i=0;i<1024;i++)
    {
        if(c[i]!=0)
        {
            for(int j=0;j<c[i];j++)
            {
                cout<<i<<endl;
            }
        }
    }
}
