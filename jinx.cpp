#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numOfStrings,numOfRule;
    vector <string> algo[100];
    string temp,temp1,temp2;
    cin >> numOfStrings;
    for( int i = 0 ; i < numOfStrings ; i++ )
    {
        cin >> temp;
        algo[i].push_back(temp);                                            ///algorithms
    }
    /*for( int i =0 ; i < numOfStrings ; i++ )
    {
        for( auto  it = algo[i].begin() ; it != algo[i].end() ; it++ )
        {
            cout << *it << endl;
        }
    }*/
    cin >> numOfRule;
    vector <string> condition[100];
    for( int i = 0 ; i < numOfRule ; i++ )
    {
        cin >> temp1 >> temp2;
        condition[i].push_back(temp1);                                      ///conditions
        condition[i].push_back(temp2);
    }
    /*for( int i =0 ; i < numOfRule ; i++ )
    {
        for( auto  it = condition[i].begin() ; it != condition[i].end() ; it++ )
        {
            cout << *it << '\t' ;
        }
        cout << endl;
    }*/
    deque <string> result;
    int c = 0;
    for( int k = 0 ; k < numOfStrings ; k++)
    {
        c++;
        cout << c << endl;
        for( int i = 0 ; i < numOfRule ; i++ )
        {
            c++;
            cout << c << endl;
            for( int j = 0 ; j < 2 ; j++ )
            {
                c++;
                cout << c << endl;
                if( algo[k][0] == condition[i][j])
                {
                    result.push_back(algo[k][0]);
                    cout << result[i] << endl;
                    if(j)
                    {
                        result.push_front(condition[i][j-1]);
                        cout << result[i] << endl;
                    }
                    else
                    {
                        result.push_back(condition[i][j+1]);
                        cout << result[i] <<endl;
                    }
                }
                //break;
            }
        }
    }
    cout << c << endl;
    for( auto it = result.begin() ; it != result.end() ; it++ )
    {
        cout << *it << ' ';
    }
    return 0;
}
