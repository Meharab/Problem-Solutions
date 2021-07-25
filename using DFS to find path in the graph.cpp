#include<bits/stdc++.h>


using namespace std;



bool vis[1002][1002];

int x[] = {1,-1,0,0};  /// direction array...(x[0],y[0]) mane right, (x[1],y[1]) = left, (x[2],y[2]) = up , (x[3],y[3]) = down
int y[] = {0,0,1,-1};

char s[1005][1005];

void dfs(int r, int c, int n)  /// (r,c) = current cell
{
    if(vis[r][c]==1) return; /// (r,c) te age 1 bar aschi...tai return
    vis[r][c] = 1;
    for(int i = 0; i<4; i++){
        int a = r+x[i], b = c+y[i];   /// (a,b) = new cell..(r,c) thk (a,b) te jabo
        if(min(a,b)<0 || max(a,b)>=n) continue;  /// because (a,b) grid er baire chole gese
        if(s[a][b]=='x') continue;  /// blocked cell
        dfs(a,b,n);  /// go to cell (a,b)
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
    dfs(br,bc,n);  /// go to cell (br,bc)
    /// initially vis e sob 0. kono cell (i,j) visit korle vis[i][j] = 1 kore dibo
    if(vis[gr][gc]==1) printf("Yes\n");
    else printf("Shuvo will remain single this year too :(\n");
    return 0;
}
