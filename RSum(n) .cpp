#include<bits/stdc++.h>
using namespace std;
void sum(int n)
{
    if(n==0)
        sum(n)2+sum(n);
    else
        sum(n)=2+sum(n-1);
}
main()
{
    int n;
    cin<<n;
    cout<<sum(int n);
}
