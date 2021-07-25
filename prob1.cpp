#include<bits/stdc++.h>
using namespace std;
main()
{
    int k,n,l,x,y,m,a=0;
    while(1){

there:
    cin>>n>>k;
    l=240-k;
    if(l<5){
        cout<<"0\n";
        goto there;
    }
    else{

    for(m=1;m<=n;m++){
                a=a+(m*5);
    }

  here:
    y=l-a;

        if(y<0)
        {
            a=a-(n*5);
            n=n-1;
            goto here;
        }
        else{
                        cout<<n<<endl;
        }

    }
    }
}
