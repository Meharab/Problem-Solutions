#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define MAX ((ll)(1e18))
#define pi (2*acos(0))
#define mp make_pair
#define M ((ll)(998244353))
#define xx first
#define yy second
#define NN ((ll)(305))
#define N ((ll)(1e5 + 5))
#define pq priority_queue
///#define Q queue
#define eps 0
#define log 20
#define pb push_back
#define MOD 998244353


using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef unsigned long long lu;


typedef tree < ll,  null_type,  less < ll >,  rb_tree_tag,  tree_order_statistics_node_update > o_set;

char s[N];

int type[6];

int main()
{
    string start, finish;

    start = "([{<";
    finish = ")]}3";
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        memset(type,0,sizeof type);
        bool flag = 1;
        for(int i = 0; s[i]!='\0'; i++){
            for(int j = 0; j<4; j++){
                if(s[i]==start[j]) type[j]++;
                if(s[i]==finish[j]) type[j]--;
            }

            for(int j = 0; j<4; j++){
                if(type[j]<0){
                    flag = 0;
                    break;
                }
            }
        }

        for(int i = 0; i<4; i++){
            if(type[i]!=0) flag = 0;
        }

        if(flag) printf("Balanced <3\n");
        else printf("Not Balanced :'(\n");
    }
    return 0;
}
