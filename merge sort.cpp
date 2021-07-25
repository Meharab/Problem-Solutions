#include<bits/stdc++.h>
using namespace std;
marge(int a[],int m,int b[],int n)
{
    int c[124],i,j,k;
        for(i=0,j=0,k=0;i<m;k++)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    for(;j<n;j++,k++)
        c[k]=b[j];
    for(i=0;i<m+n;i++)
        cout<<c[i]<<"\t";
}
main()
{
    int a[124],b[124],m,n,i,j;
    cin>>m>>n;
    for(i=0;i<m;i++)
        cin>>a[i];
    for(j=0;j<n;j++)
        cin>>b[j];
    if(m<n)
        marge(a,m,b,n);
    else
        marge(b,n,a,m);
}
