#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,s=0;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
            s=s+i;
    }
    cout<<s<<endl;

}
