#include<bits/stdc++.h>
using namespace std;
bool isValid(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(abs(i-j)==abs(a[j]-a[i]))
                {
                    return false;
                }
            }
        }
    }
    return true;
}
int main()
{
    int a[100],n,i,c=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    while(next_permutation(a,a+n))
    {
        c++;
        if(isValid(a,n))
        {
            cout<<"valid sequence : ";
            for(i=0;i<n;i++)
            {
                cout<<a[i]<<"\t";
            }
            cout<<endl;
            k++;
        }
        /**else
        {
            cout<<"not valid!"<<endl;
        }**/
    }
    cout<<"total chack : "<<c<<"\n"<<"total solution : "<<k<<endl;
}

