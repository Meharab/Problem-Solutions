#include<bits/stdc++.h>
#define PI (2*acos(0.0))
using namespace std;
int main()
{
    int len,wid,re1,re2,ars,arc,par;
    while(1)
    {
        cin >>wid >> len >> re1 >>re2;
        if( wid == 0 && len == 0 && re1 ==0 && re2 ==0)
            break;
        ars = len * wid;
        arc = (PI * re1 * re1) + (PI * re2 * re2);
        par = sqrt(len*len + wid*wid);
        if((ars-arc) >=0 && ((2*re1 + 2 *re2) <= wid || (2*re1 + 2*re2) <= len || par > (2*re1 + 2*re2)))
            cout << "P" << endl;
        else
            cout<< "I" << endl;
    }
     return 0;
}
