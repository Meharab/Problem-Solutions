#include<stdio.h>
#include<iostream>
using namespace std;
#define INF 30000
#define R 100

int n,v,cost[R][R],dist[R];
/*********************Data Input*********************/
void input()
{
	int x,y,length;

	cout<<"Enter number of Vertices :";
	cin>>n;

	for(x=0;x<=n;x++)		// elements of cost[][] is
	{
		for(y=1;y<=n;y++)	//  initializing by Infinite
			cost[x][y]=INF;
		cost[x][x]=0;
	}

	do						// getting edges and cost
	{	cout<<"Enter edge (-1, -1 to quit): ";
		cin>>x>>y;
		if(x==-1 || y==-1) break;
		cout<<"Enter length: ";
		cin>>length;
		cost[x][y]=length;
	}while(1);

	cout<<"Enter Source:";
	cin>>v;
}
/****************Single Source Shortest Path***************/
void ShortestPath()
{
	int i,j, temp,u,w;
	int s[R];

	for(i=1;i<=n;i++)
	{
		s[i]=0;
		dist[i]=cost[v][i];
	}
	s[v]=1;
	dist[v]=0;
	for(i=2;i<n-1;i++)
	{
		temp=INF; u=1;
		for(j=1;j<=n;j++)
			if(s[j]==0 && dist[j]<temp)
			{	u=j; temp=dist[j]; 	}

		s[u]=1;
		for(w=1;w<=n;w++)
			if(s[w]==0 && dist[w]>dist[u]+cost[u][w])
				dist[w]=dist[u]+cost[u][w];
	}
}
/*********************Output*********************/
void display()
{
	int i;
	cout<<"\nShortest Paths from Source "<<v<<":\n";
	for(i=1;i<=n;i++)
		cout<<i<<":"<<dist[i]<<" ";

	cout<<"\n\n";
}
/*********************Main Function*********************/
int main()
{
	//freopen("single source.txt","r",stdin);
	int q;

	do
	{	cout<<"1. Input data\n";
		cout<<"2. Evaluate Single Source Shortest Path\n";
		cout<<"3. Quit\n";

		cin>>q;
		if(q==1) input();
		else if(q==2)
		{
			ShortestPath();
			display();
		}
	}while(q!=3);

	return 0;
}
