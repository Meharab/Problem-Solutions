#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define MAX ((ll)(1e8))
#define pi (2*acos(0))
#define M ((ll)(1e9 + 7))
#define NN ((ll)(305))
#define N ((ll)(1e5 + 5))
#define eps 0
#define logn 20


using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef unsigned long long ull;


typedef tree < ll,  null_type,  less < ll >,  rb_tree_tag,  tree_order_statistics_node_update > o_set;


vector < int > v[105];      //105 (1 x n) dimensional separate array for edge

bool vis[105];                  //an array for those node which are visited

void dfs(int n)                 // n = source(src)
{
    if(vis[n]==1) return;  //terminate the function
    vis[n] = 1;

    for(int i = 0; i<v[n].size(); i++){
        int a = v[n][i];            // here v[n] is the node v[i] is the (i+1)th value
        dfs(a);
    }
}

int main()
{
    for(int test = 1; ; test++){
        for(int i = 1; i<=100; i++) v[i].clear();           //initiating all edge to 0
        int src , snk;
        scanf("%d %d",&src,&snk);
        if(src==0) break;
        while(1){
            int a, b;
            scanf("%d %d",&a,&b);
            if(a==0 && b==0) break;
            v[a].push_back(b);                                  //initiating path from a node to b node
        }

        memset(vis,0,sizeof vis);                           //initiating all visit array to 0

        dfs(src);
        printf("Case %d: ",test);
        if(vis[snk]==1) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
