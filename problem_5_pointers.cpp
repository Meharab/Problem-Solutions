#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int n;
    cout<<"enter the numbers count \n";
    cin>>n;
    int* numbers=new int[n];
    cout<<"start entering the numbers"<<endl;
    for(int i=0;i<n;i++)
    cin>>*(numbers+i);
     int min;
    int max;
    int sum;
    float average;
    min=max=sum=*(numbers+0);
for(int i=1;i<n;i++)
    {
       if(*(numbers+i)<min) min=*(numbers+i);
       if(*(numbers+i)>max) max=*(numbers+i);
       sum+=*(numbers+i);
     }
     average=((float)sum)/n;
     cout<<"sum =" <<sum<<" , average= "<< average<<"\n";
     cout<<" maximum =" <<max<<" , minimum= "<<min;
     delete [ ] numbers;
       
    system("PAUSE");
    return EXIT_SUCCESS;
}
