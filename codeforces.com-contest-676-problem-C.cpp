#define watch2(x , y) cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define watch(x) cout << (#x) << " is " << (x) << endl
#define hitAi ios_base::sync_with_stdio(false)
#include<bits/stdc++.h>
#define Mod 1000000007
const long long OO = 2e18;
using namespace std;

bool check( string s , int k , int l ){
	int dp[2] = {0 , 0};
	for( int i = 0; i < l; i++ ){
		dp[s[i] - 'a']++;
	}
	if( k >= min( dp[0] , dp[1] ) )return 1;
	for( int i = 0; i + l < (int)s.size(); i++ ){
		dp[s[i] - 'a']--;
		dp[s[i + l] - 'a']++;
		if( k >= min( dp[0] , dp[1] ) )return 1;
	}
	return 0;
}

int main(){
	hitAi;
	int n , k;
	cin >> n >> k;
	string s;
	cin >> s;
	int l = 1 , r = n;
	int ans = 0;
	while( l <= r ){
		int mid = (l + r ) >> 1;
		if( check(s , k , mid ) ){
			ans = max( ans , mid );
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	cout << ans;
}
