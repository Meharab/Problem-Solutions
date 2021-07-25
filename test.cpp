#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    long long int n,i,j,k,a,b,min,min1,min2;
    scanf("%I64d",&n);
    long long int arr1[n+2];
    long long int arr2[n+2];

    for(i=0;i<n;i++)
    {
        scanf("%I64d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&arr2[i]);
    }

    a=0,b=0;
    min = INT_MAX;

    for(j=1;j<n-1;j++)
    {
        min1 = INT_MAX;
        min2 = INT_MAX;
        for(i=0;i<j;i++)
        {
            if (arr2[i]<min1 and arr1[i]<arr1[j]){
                min1 = arr2[i];
                a = arr1[i];
            }
        }

        for(k=j+1;k<n;k++)
        {
            if (arr2[k]<min2 and arr1[k]>arr1[j]){
                min2 = arr2[k];
                b = arr1[k];
            }
        }

        if (min1+arr2[j]+min2 < min)
            min = min1+arr2[j]+min2;
    }

    if(a==0 || b==0)
        printf("-1");
    else
        printf("%I64d\n",min);
    return 0;
}
