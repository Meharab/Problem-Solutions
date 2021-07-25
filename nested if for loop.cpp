#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,f;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=2;i<n/2;i++)
        if(n%i==0)
        {
            f=0;
            break;
        }
        if(f!=0)
            cout<<n<<" is a prime number";
        else
            cout<<n<<" is not a prime number";
}
