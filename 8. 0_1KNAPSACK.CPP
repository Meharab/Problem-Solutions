// 0/1 Knapsack problem//


#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int max(int a,int b)
{
  if(a>b)
   return a;
  else
   return b;
}
int main()
{
  int a[100][100],w[100],p[100],m,n,i,j;

  printf("How many element: ");
  cin>>n;
  printf("Bag size: ");
  cin>>m;
  printf("---------------------\n");
  printf("Enter price & weight:\n");
  printf("---------------------\n");
  for(i=1;i<=n;i++)
  {
    printf("%d: ",i);
    printf("Enter weight: ");
    cin>>w[i];
    printf("   Enter price : ");
    cin>>p[i];
  }
  for(j=0;j<=m;j++)
  a[0][j]=0;

  for(i=1;i<=n;i++)
  for(j=0;j<=m;j++)
  {
    if(w[i]>j)
     a[i][j]=a[i-1][j];
    else
     a[i][j]=max(a[i-1][j],p[i]+a[i-1][j-w[i]]);
  }
  cout<<"\n\n";
  for(i=1;i<=n;i++)
  {
    for(j=0;j<=m;j++)
    {
      printf("%5d",a[i][j]) ;
    }
      cout<<"\n";
  }

  printf("\n           Total profit: %d             ",a[n][m]);

  return 0;
}
