#include<bits/stdc++.h>
using namespace std;
main()
{
    int a;
    char b[100],c[100];
    cin>>a;
    for(int i=0;i<a;i++)
    {
            cin>>b>>c;
            for(int i=0;i<strlen(b);)
            {
                for(int j=0;j<strlen(c);)
                {
                    if(b[i]==c[j])
                        {
                            cout<<".";
                            i++;
                            j++;
                        }
                    else
                            {
                            cout<<"*";
                            i++;
                            j++;
                        }
                }
            }
            cout<<endl;
    }
}
