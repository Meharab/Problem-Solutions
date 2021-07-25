#include<bits/stdc++.h>
using namespace std;
main()
{
    float a,b;
    char op;
    cout<<"type your expression :"<<endl;
    cin>>a>>op>>b;
    switch(op)
    {
        case'+': cout<<a+b; break;
        case'-': cout<<a-b; break;
        case'*': cout<<a*b; break;
        case'/': if(b==0)
                        {
                            cout<<"invalid input !"<<endl;
                             break;
                        }
                       else
                            cout<<a/b; break;
        default: cout<<"unknown operation !";
    }
}
