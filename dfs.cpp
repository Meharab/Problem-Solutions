#include<bits/stdc++.h>
using namespace std;
int g[138][138],visited[124],n,i,j;
void dfs(int i)
{
    int j;
    cout<<i<<"  ";
    visited[i]=1;
    for(j=0;j<n;j++)
        if(!visited[j] & g[i][j]==1)
            dfs(j);
}
main()
{
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>g[i][j];
    for(i=0;i<n;i++)
        visited[i]=0;
    dfs(0);
}
