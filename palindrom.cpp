#include<bits/stdc++.h>
using namespace std;
main()
{
    while(1){
    char a[1000],b[1000],c[1000]="DONE";
    gets(a);
    if(strcmp(a,c)==0)
        exit(0);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
        cout<<"umm hmm"<<endl;
    else
        cout<<"uh oh.."<<endl;
}
}
