
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{

	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

bool check(long long n)
{
	int sq = (int)sqrt(n);

	if (1LL * sq * sq != n)
		return false;

	return isPrime(sq) ? true : false;
}

int main()
{
	long long num ;
	int T;
	cin>>T;
	for(int i=0;i<T;i++){

	cin>>num;
	if (check(num))
		cout << "Ronaldo loves "<< num << endl;
	else
		cout << "Ronaldo does not love "<< num << endl;

	}
	return 0;
}

