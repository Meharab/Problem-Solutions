#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,a[138],i,item;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>item;
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            cout<<item<<" is found at "<<i+1<<" position "<<endl;
            break;
        }
    }
    if(i==n)
        cout<<"item is not here!"<<endl;
}
