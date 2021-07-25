#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
    int a[3];
int i=0;
  int b,s=0;
  int x;

            cin>>x;
while(x!=0){
 a[i]=x%10;
 s=s+a[i];
 i++;
 x=x/10;
  }
 /*stringstream geek(a[i]);

    // The object has the value 12345 and stream
    // it to the integer x

    geek >> x[i];*/
//cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" ";
    int c[6];
    c[0]=a[0]*10+a[1];
    c[1]=a[0]*10+a[2];
    c[2]=a[1]*10+a[0];
    c[3]=a[1]*10+a[2];
    c[4]=a[2]*10+a[0];
    c[5]=a[2]*10+a[1];
  int d;
    d=c[0]+c[1]+c[2]+c[3]+c[4]+c[5];
    int e;
    e=d/s;
    int f;
    f=e/2;
    cout<<f<<endl;
    }
    return 0;

}
