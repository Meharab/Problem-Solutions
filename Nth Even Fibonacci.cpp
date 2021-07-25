#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long int evenFib(int n)
{
    if (n < 1)
    return n;
    if (n == 1)
    return 2;

    return ((4 * evenFib(n-1)) +  evenFib(n-2));
}

int main ()
{
    int n , test;
    cin >> test;
  for ( int i = 0 ; i < test ; i++ ){
    cin >> n;
    cout << evenFib(n) << endl;
  }
    return 0;
}
