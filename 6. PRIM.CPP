#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

#define INF 25000
#define R 50

/*******************Function Prototypes*******************/
int total,n,t[R][3],cost[R][R];

int input();
void display(int mincost);
int Prim();
/**********************Main Function**********************/
int main()
{
	int q, mincost;

	do
	{	cout<<"1. Input data\n";
		cout<<"2. Evaluate Minimum-Cost Spanning Tree\n";
		cout<<"3. Quit\n";
		cout<<"Enter choice: ";
		cin>>q;

		if(q==1) n=input();
		else if(q==2)
		{
			mincost=Prim();
			display(mincost);
		}
	}while(q!=3);
	return 0;
}

/*********************Output*********************/
void display(int mincost)
{
	int i;
	cout<<"\nPrim's Minimum-Cost Spaninng Tree is "<<mincost<<"\n";
	cout<<"The Spanning Tree is:\n";
	for(i=1;i<=total;i++)
		cout<<t[i][1]<<" -> "<<t[i][2]<<"\n";

	cout<<"\n\n";
}
/*********************Data Input*********************/
int input()
{
	int V, x,y,kost;

	cout<<"Enter number of Vertices :";
	cin>>V;

	for(x=0;x<=V;x++)		// elements of cost[][] is
		for(y=0;y<=V;y++)	//  initializing by Infinite
		{
			cost[x][y]=INF;
			cost[y][x]=INF;
		}

	do						// getting edges and cost
	{	cout<<"Enter edge (-1, -1 to quit): ";
		cin>>x>>y;
		if(x==-1 || y==-1) break;
		cout<<"Enter cost: ";
		cin>>kost;
		cost[x][y]=kost;
		cost[y][x]=kost;
	}while(1);

	return V;
}

/**********Prim's Minimum-cost Spanning Tree*********/
int Prim()
{
	int i,j, k,l, mincost, adjacent[R];

	k=l=1; total=0;
	for(i=1;i<=n;i++)	// finding an edge of minimum cost
	{	for(j=1;j<=n;j++)
			if(cost[i][j]<cost[k][l])
			{	k=i; l=j;
			}
	}
	mincost=cost[k][l];
	t[1][1]=k; t[1][2]=l; total++;
	for(i=2;i<=n;i++)
	{	if(cost[i][l]<cost[i][k]) adjacent[i]=l;
		else adjacent[i]=k;
	}
	adjacent[k]=adjacent[l]=0;

	for(i=2;i<n;i++)
	{
		l=INF;
		for(k=1;k<=n;k++)
		{	if( cost[k][adjacent[k]] < l )
			{	l=cost[k][adjacent[k]];
				j=k;
			}
		}
		t[i][1]=adjacent[j]; t[i][2]=j;
		total++;
		mincost=mincost+cost[j][adjacent[j]];
		adjacent[j]=0;

		for(k=1;k<=n;k++)	// updating adjacent[]
			if(adjacent[k]!=0 && cost[k][adjacent[k]]>cost[k][j])
				adjacent[k]=j;
	}
	return mincost;
}
