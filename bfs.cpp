#include<bits/stdc++.h>
///#include<iostream>
//#include<queue>
using namespace std;
main()
{
    int a[10][10],v[100],d[100],i,j,s,u,p,n;
    cin>>n;//node number
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            a[i][j]=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(i=1;i<=n;i++)
    {
        d[i]=0;// d=distance
        v[i]=0;//v=visited
    }
    cin>>s;//starting node
    v[s]=1;
    queue<int>q;
    q.push(s);
    int c=0;
    while(!q.empty())
    {
        int u=q.front();
        for(p=1;p<=n;p++)
        {
            if(a[u][p]==1 && v[p]==0)
            {
                d[p]=d[u]+1;
                v[p]=1;
                c++;
                q.push(p);
            }
        }
        q.pop();
        if(c==n)
            break;
    }
    for(i=1;i<=n;i++)
        cout<<"distance from "<<s<<" to "<<i<<" is = "<<d[i]<<endl;
}
