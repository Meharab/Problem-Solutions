#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k,l,square[15][15];
    cin>>n;
    if((n%2)==0)
    {
        cout<<"n is even ! "<<endl;
        return 0;
    }
    else
    {
        for(int i=0;i<=n-1;i++)
        {
            for(int j=0;j<=n-1;j++)
            {
                square[i][j]=0;
                square[0][(n-1)/2]=1;
                j=(n-1)/2;
                for(int key=2;key<=n*n;key++)
                {
                    if(i>=1)
                    {
                        k=i-1;
                    }
                    else
                    {
                        k=n-1;
                    }
                    if(j>=1)
                    {
                        l=j-1;
                    }
                    else
                    {
                        l=n-1;
                    }
                    if(square[k][l]>=1)
                    {
                        i=(i+1)%n;
                    }
                    else
                    {
                        i=k;
                        j=l;
                    }
                    square[i][j]=key;
                }
            }
        }
        for(int m=0;m<=n-1;m++)
        {
            for(int o=0;o<=n-1;o++)
            {
                cout<<square[m][o]<<"\t";
            }
            cout<<endl;
        }
    }
}
