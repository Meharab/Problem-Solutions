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

void Merge(int a[],int low,int mid,int high)
{
  int b[80];
  int h=low;
  int i=low;
  int j=mid+1;
  int k;

  while((h<=mid)&&(j<=high))
  {
    if ( a[h] <= a[j] )
    b[i++]=a[h++];

    else
    b[i++]=a[j++];
  }

  if(h>mid)

  for(k=j;k<=high;k++)
  {
    b[i++]=a[k];
  }
  else

  for(k=h;k<=mid;k++)
  {
    b[i++]=a[k];
  }

  for(k=low;k<=high;k++)
  a[k]=b[k];
}



 void Mergesort(int a[],int low,int high)
  {
    if (low<high)
    {
      int mid=(low+high)/2;
      Mergesort(a,low,mid);
      Mergesort(a,mid+1,high);
      Merge(a,low,mid,high);
    }

  }

 int main()
  {
    int i;
    int b[4500];
    clock_t sb,eb,sq,eq;
    for(i=0;i<4500;i++)
    b[i]=rand();
    sb=clock();
    bubble(b,4500);
    eb=clock();
    cout<<"Bubble "<<((eb-sb)/CLK_TCK)<<"\n";

    sq=clock();
    Mergesort(b,1,4500);
    eq=clock();
    cout<<"Quick "<<((eq-sq)/CLK_TCK);
    return 0;
  }
