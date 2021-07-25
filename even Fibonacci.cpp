
#include<bits/stdc++.h>
using namespace std;

int sumFib(int n)
{

	long long int f1 = 0, f2 = 2;
	long long int sum;
	sum = f1 + f2;

	if (n < 1)
		return f1;

    if (n==2)
        return f2;

	while (n != 2)
	{

    long long int f3;
    f3 = 4*f2 + f1;

		f1 = f2;
		f2 = f3;
		sum = sum + f2;

		n--;
	}

	return sum;
}

int main()
{
    int t , n ;
    cin >> t;
    for(int i=0;i<t;i++){
	cin >> n;
	cout << sumFib(n) << endl;
    }
	return 0;
}

