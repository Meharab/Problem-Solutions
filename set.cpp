#include<bits/stdc++.h>
#include<set>
#include<iostream>

using namespace std;

int main()
{
    set <int> s;                    /// set is faster then vector it takes Log(n) time for operation & it sort automatically
    s.insert(124);
    s.insert(2438);
    s.insert(138);
    s.insert(3824);
    s.insert(18);
    s.insert(13);
    s.insert(38);

    for(int x : s)
        cout<<x<<'\t';

    auto it = s.find(138);
    if (it == s.end())
        cout<<"\n not found"<<endl;
    else
        cout<<"\n"<<*it<<"\tfound"<<endl;

    auto it0 = s.upper_bound(35);
    auto it1 = s.lower_bound(139);
    cout<<*it0<<'\t'<<*it1<<endl;

    auto it3 = s.upper_bound(124138);
    if(it3 == s.end())
        cout<<"the value is not in the set!"<<endl;

    s.erase(124);
    for(int x: s)
        cout<<x<<'\t';


    set<pair<int,int>> p;
    /*set < pair < int , char > > ic;
    ic.insert(124,'138');*/
    p.insert({124,138});
    p.insert({24,38});
    p.insert({14,18});
    p.insert({12,13});
    p.insert({2438,3824});

    int point = 138;
    /*auto it4 = upper_bound({point,INT_MAX});
    if(it4 == p.begin())
    {
        cout<<"\nthe given point is lying on the interval"<<endl;
        return;
    }

    it4--;
    pair<int,int> current = *it4;
    if (current.first <= point && point <= current.second)
        cout<<"\nthe given is present in the interval "<<current.first<<'-'<<current.second<<endl;
    else
        cout<<"\nthe given point is not lying in the interval !"<<endl;*/


    return 0;
}
