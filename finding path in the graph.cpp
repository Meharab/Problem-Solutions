
#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,x,y,p,q;
    char a[1000][1000];
    void backtrack(int z)
    {
        z--;
    }

    again:
    ///----------------------graph size-----------------
    cin>>n;

    ///---------------------input graph with 'o' indecating open path && 'x' indecating blocked path-------------
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }

    ///--------------------input start point (x,y) && destination point (p,q)-----------------------------------
    cin>>x>>y>>p>>q;

    ///--------------------non empty && non exceding graph----------------------------
    if(x!=0 && p!=0 && y!=0 && q!=0 && x<=n && p<=n && y<=n && q<=n )
    {

    ///--------------------start & destination on same point--------------------
    if(x==p && y==q)
        cout<<"path found :)"<<endl;

    ///--------------------starting point &/or destination point are blocked------------------
    if(((x+1)=='x' && (x-1)=='x' && (y+1)=='x' && (y-1)=='x') && ((p+1)=='x' && (p-1)=='x' && (q+1)=='x' && (q-1)=='x') )
        cout<<"no path found :("<<endl;

    ///--------------------calculating----------------------------
        while(x!=p && y!=q)
        {
            x:
            if((x+1)!='x'){
                x++;
            }
            else
            {
                if((y+1)!='x'){
                    y++;
                }
                else

               /* goto y;
                if((x-1)!='x')
                    x--;*/
            }
        }
        while(y!=q)
        {
            y:
                if((y+1)!='x'){
                    y++;
                }
                else
                {
                goto x;
                if((y-1)!='x')
                    y--;
                }
        }
    }

    ///------------------empty graph-----------------------
    else
        goto again;
}
