#include<bits/stdc++.h>
#define INFINITY 24381
#define MAX 138
using namespace std;
void dijkstra(int g[MAX][MAX],int u,int strnode)
{
    int cost[MAX][MAX],distance[MAX],pred[MAX],visited[MAX],count,mindistance,nextnode,i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(g[i][j]==0)
                cost[i][j]=INFINITY;
            else
                cost[i][j]=g[i][j];
    for(i=0;i<n;i++)
    {
        distance[i]=cost[strnode][i];
        pred[i]=strnode;
        visited[i]=0;
    }
    distance[strnode]=0;
    visited[strnode]=1;
    count=1;
    while(count<n-1)
    {
        mindistance=INFINITY;
        for(i=0;i<n;i++)
            if(distance[i]<mindistance && !visited[i])
            {
                mindistance=distance[i];
                nextnode=i;
            }
        visited[nextnode]=i;
        for(i=0;i<n;i++)
            if(!visited[i])
                if(mindistance + cost[nextnode]<distance[i])
                {
                    distance[i]=mindistance+cost[nextnode][i];
                    pred[i]=nextnode;
                }
        count++;
    }
    for(i=0;i<n;i++)
        if(i!=strnode)
        {
            cout<<"distance of node "<<i<<" is "<<distance[i]<<"\n path = "<<i;
            j=i;
            do{
                    j=pred[j];
                    cout<<" <- "<<j;
                 }while(j!=strnode);
        }
}
int main()
{
    int g[MAX][MAX],i,j,n,u;
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>g[i][j];
    cin>>u;///starting node
    dijkstra(g,n,u);
    return 0;
}
