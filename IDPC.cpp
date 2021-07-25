#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float b,l,y,x,r,ci,re,ar;
    double pi = 2*acos(0.0);
    cin>>b;
    l=(10*b)/6;
    y=b/2;
    x=(4.5*l)/10;
    r=l/5;
    ci=pi*r*r;
    re=l*b;
    ar=(re-ci);
    printf("Co-ordinate of center of the red circle (x,y) = (%.1llf, %.1llf)\n",x,y);
    printf("Red circle area = %.4llf\n",ci);
    printf("Bottle green area = %.4llf\n",ar);
    return 0;
}
