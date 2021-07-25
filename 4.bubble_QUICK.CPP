//This program sort the number of elements by using Quicksort Algorithm

#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
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
void quick(int a[],int left,int right)
{
  int i=left,j=right,mid;
  mid=(a[i]+a[j])/2;
  while(i<=j)
  {
    while(a[i]<mid)
    i++;
    while(a[j]>mid)
    j--;
    if(i<=j)
    {
      int temp;
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      i++;
      j--;
    }
  }

  if(left<j)
  quick(a,left,j);
  if(i<right)
  quick(a,i,right);
 }
int main()
  {
    int i;
    int b[4500];
    clock_t sb,eb,sq,eq;
    //std::randomize();
    for(i=0;i<4500;i++)
    b[i]=rand();
    sb=clock();
    bubble(b,4500);
    eb=clock();
    cout<<"Bubble "<<((eb-sb)/CLK_TCK)<<"\n";

    sq=clock();
    quick(b,1,2500);
    eq=clock();
    cout<<"Quick "<<((eq-sq)/CLK_TCK);
    return 0;
}
