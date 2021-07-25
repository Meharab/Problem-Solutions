#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string ope , d("donate") , r("report");
        getline(cin,ope);
        if( ope.compare(d))
            cout<<"at last";
        else
        {
                cout<<"better luck next time";
        }

    }
    return 0;
}
