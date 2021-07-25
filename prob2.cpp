#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k;
    while(1){
    cin>>n>>k;
    for(int i=1;i<=k;i++){
    ///if(((int)n/10)==((float)n/10)){
    if(n%10==0){
        n=n/10;
    }
    else{
        n=n-1;
    }
}
cout<<n<<endl;
}
}
