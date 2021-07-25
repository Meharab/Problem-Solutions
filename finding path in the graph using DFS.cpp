#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define MAX ((ll)(1e15))
#define pi (2*acos(0))
#define M ((int)(1e9 + 7))
#define NN ((int)(305))
#define N ((int)(25e4 + 5))
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

typedef tree < int,  null_type,  less < int >,  rb_tree_tag,  tree_order_statistics_node_update > o_set;

bool vis[1002][1002];

int x[] = {1,-1,0,0};
int y[] = {0,0,1,-1};

char s[1005][1005];

void dfs(int r, int c, int n)
{
    if(vis[r][c]) return;
    vis[r][c] = 1;
    for(int i = 0; i<4; i++){
        int a = r+x[i], b = c+y[i];
        if(min(a,b)<0 || max(a,b)>=n || s[a][b]=='x') continue;
        dfs(a,b,n);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        scanf("%s",s[i]);
    }
    int br, bc, gr, gc;
    scanf("%d %d %d %d",&br,&bc,&gr,&gc);
    br--;
    bc--;
    gr--;
    gc--;
    dfs(br,bc,n);
    if(vis[gr][gc]) printf("Yes\n");
    else printf("Shuvo will remain single this year too :(\n");
    return 0;
}
