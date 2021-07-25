#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,l,a[100];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>l;
        for(int j=0;j<l;j++)
        {
            cin>>a[j];
        }
        int c=0;
    for(int i=1;i<=l;i++)
    {
        int j=i;
        for(int k=i+1;k<=l;k++)
        {
            if(a[k]<a[j])
            {
                int t;
                c++;
                j=k;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    ///for(int m=0;m<l;m++)
        ///cout<<a[m]<<endl;
    cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
  }
}

