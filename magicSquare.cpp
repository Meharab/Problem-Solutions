#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a[400][400],x,y,i,j,k,n,upBound=1, rightBound;
    for(i=0;i<400;i++)
        for(j=0;j<400;j++)
            a[i][j] = 0;
    printf("Enter line number: ");
    scanf("%d",&n);
    k=1;
    a[1][n/2]=k++;
    x =int(n/2);// column
    y = 1; // row
    rightBound = n-1;
    while(k<=n*n)
    {
        x++;
        y--;
        //cout<<"loop, row = "<<y<<" col = "<<x<<" k = "<<k<<endl;
        if((x>rightBound && y<upBound)||(a[y][x]!=0))
        {
            // 03, both boundary crossed
            y+=2;
            x--;
            //cout<<"1st, update: row = "<<y<<" col = "<<x<<" k = "<<k<<endl;

        }
        else if(x<=rightBound && y<upBound)
        {
            y = y + n;
            //cout<<"2nd, update: row = "<<y<<" col = "<<x<<" k = "<<k<<endl;

            // 01 02 up boundary crossed
        }
        else if(x>rightBound && y>=upBound)
        {
            //cout<<"3rd, update: row = "<<y<<" col = "<<x<<"k = "<<k<<endl;

            x = x-n;
            // 13,23 up boundary crossed
        }
        a[y][x] = k;
        //cout<<"a["<<y<<"]["<<x<<"] = "<<k<<endl<<endl;
        k++;
    }

    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%-5d",a[i][j]);
        }
        printf("\n");

    }



    return 0;
}
