#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    for(int i=0; ;i++)
    {
        n=n-3;
        if(n<0)
        {
            break;
        }
        cout<<n<<endl;
    }
}
