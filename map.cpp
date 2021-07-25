#include<bits/stdc++.h>
#include<map>
#include<iostream>
//#include "stdafx.h"

using namespace std;

int main()
{
    map <int,int> m;
    m[0]=38;
    m[1]=124138;
    m[2]=2438;
    m[124]=138;
    m[138]=124;

    map<char,char> cnt;
    string x = "habibi";

    for(char c : x)
        cnt[c]++;
    cout<<cnt['a']<<'\t'<<cnt['z']<<endl;

    m.erase(124);
    auto it = m.find(124);
    //cout<<*it<<endl;

    return 0;
}
