#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<algorithm>         //sort func
using namespace std;

bool f(int x,int y)
{
    return x>y;
}
int main()
{
    vector <int> v;
    vector <int> :: iterator it;
    vector <int> :: reverse_iterator rit;

    v.assign(7,138);

    it=v.begin();
    v.erase(it+3);                          ///erase at a certain point
    v.insert(it+3,124);                 ///insert in a position & push the rest of the element to rigth

    for(int i=0;i<10;i++)
        v.push_back(i);


    cout<<v.max_size()<<endl;           ///checking the max size of vector can contain
    cout<<v.capacity()<<endl;           ///checking the size(bit) of current vector
    cout<<v.empty()<<endl;              ///checking the vector is empty or not
    //cout<<v.research()<<endl;

    ///-----------------printing with iratetor-----------------

    for(it = v.begin() ; it != v.end() ; it++)
        cout<< *it<<'\t';                   /// using pointer to get the value that the address contain
    cout<<endl;

    for(rit = v.rbegin() ; rit != v.rend() ; rit++)
        cout<< *rit<<'\t';                   /// using 'r' before vector fuction benifits us to travers reverse
    cout<<endl;

    sort(v.begin(),v.end());            ///O(nlogn)

    for(int i=0;i != v.size();i++)
        cout<<v[i]<<endl;


    sort(v.begin(),v.end(),f);

    for(int &x: v)                          ///reference
        x++;
    for(int x : v)
        cout<<x<<'\t';


    bool present = binary_search(v.begin(),v.end(),2438);        /// 0 means it matches in the array
    cout<<'\t'<<present<<endl;

    vector <int> :: iterator lb = lower_bound(v.begin(),v.end(),3);           /// checks if >=
    vector <int> :: iterator ub = upper_bound(v.begin(),v.end(),7);          /// checks if >
    cout<<*lb<<'\t'<<*ub<<'\t'<<lb-ub<<endl;

    auto LB = lower_bound(v.begin(),v.end(),3);           /// checks if >=
    auto UB = upper_bound(v.begin(),v.end(),7);          /// checks if >
    cout<<*LB<<'\t'<<*UB<<'\t'<<lb-ub<<endl;

    vector <int> victor(7,-1);                                          /// allocate 7 space initialized with -1

    for( auto it : victor)
        cout << it << '\t';

    victor.reserve(11);
    victor.resize(15,7);
    for ( auto it : victor)
        cout << it << '\t';

     cout << endl
              << victor.at(3)
              << '\n';
     cout << victor.at(138) << endl;        /// at() function checks specific index of vector

    return 0;
}
