#include<bits/stdc++.h>
using namespace std;
main()
{
    int a[124][124],n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }



}
