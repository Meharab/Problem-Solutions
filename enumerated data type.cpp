#include<bits/stdc++.h>
using namespace std;
main()
{
    int x;
    enum days {null,sat,sun,mon,tues,wednes,thurs,fri};
    days lab;
    cout<<"what day you want to assign extra class(1-7)?"<<endl;
    cin>>x;
    lab=days(x);
    if(lab==sat || lab==tues)
        cout<<"you have lab class today !"<<endl;
    else
        cout<<"okay, i'll put an extra class today !"<<endl;
}
