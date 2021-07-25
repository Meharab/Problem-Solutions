#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m,b[124];
    char a[124];
    string c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        for(int j=0;j<k;j++)
        {
            cin>>a[j]>>b[j];
        }
        cin>>m;
        //cin.getline(c,10000);
        for(int l=0;l<=m;l++)
            cin>>c;
        for(int f=0;f<m;f++)
        {


        /*char a[50], b[50];
int i
scanf("%s %s",a,b);*/
for(i = 0;a[i]!='\0' && c[i]!='\0';i++)
{
    if(a[i]!=c[i]){
       break;
    }
}
if(a[i]==c[i] && a[i]=='\0') printf("milse");
else printf("mile nai");
    }
    }
    return 0;
}
