#include<bits/stdc++.h>
using namespace std;
void bubble(int a[],int n)
{
  int k,i,j,temp;
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
	temp=a[j+1];
	a[j+1]=a[j];
	a[j]=temp;
      }
    }
  }
}
/*void selectionSort(int n)
{
    int x[100],c=0;
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++)
    {
        int t;
        int j=i;
        for(int k=i+1;k<n;k++)
        {
            if(x[k]<x[j])
            {
                c++;        //not nessecery
                j=k;
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
    for(int l=0;l<n;l++)
        cout<<x[l]<<endl;
    cout<<"number of exchange : "<<c;
}*/
int main()
{
    int n,k,x[100],c=0;
    ///cout<<"enter the number of house (n) & the range of transmitter (k) : "<<endl;
    cin>>n>>k;
    ///cout<<"enter the house location according  to a single one dimentional point (e.g. 8,3,1,2,4)"<<endl;
    //selectionSort(n);
    for(int i=0;i<n;i++)
        cin>>x[i];
    bubble(x,n);
    /*for(int i=0;i<n;i++)
    {
        int t;
        int j=i;
        for(int k=i+1;k<n;k++)
        {
            if(x[k]<x[j])
            {
                c++;        //not nessecery
                j=k;
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
    for(int l=0;l<n;l++)
        cout<<x[l]<<endl;
    cout<<"number of exchange : "<<c;
    c=0;*/
    ///cout<<"location of transmitter : "<<endl;
    int i=1,j=i+1;
    here:
    if(abs(x[i]-x[j])<=k && i<=n && j<=n)
    {
        ///cout<<x[i]<<'\t';
        c++;
        i++;
        j++;
         if(abs(x[i]-x[i])<=k && i<=n && j<=n)
         {
             i=i+2;
             j=j+2;
             goto here;
         }
        goto here;
    }
    else
    {
        ///cout<<x[i]<<'\t';
        c++;
         if(i>k || j>k)
            goto there;
        i++;
        j++;
        goto here;
    }
    there:
    ///cout<<'\n'<<"number of transmitter should need :"<<'\n'<<c<<endl;
    cout<<c<<endl;
    return 0;
}
