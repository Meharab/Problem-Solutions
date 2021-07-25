#include<bits/stdc++.h>
using namespace std;
main()
{
    int n=8,a[100]={7,2,4,6,5,9,12,11},c=0;/*15//8,2,124,138,38,24,1,4,3,2438,1213,23,43,28,3824*/
    for(int i=0;i<n;i++)
    {
        int t;
        int j=i;
        for(int k=i+1;k<n;k++)
        {
            if(a[k]<a[j])
            {
                c++;        //not nessecery
                j=k;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(int l=0;l<n;l++)
        cout<<a[l]<<endl;
    cout<<"number of exchange : "<<c;
}
