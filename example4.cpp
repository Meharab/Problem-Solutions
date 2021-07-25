#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /* this program reads 10 numbers and their sum, average, maximum and minimum.

      ECE 250
      Hany Samuel*/
      

    const int n=10;
    int numbers[n];
    for(int i=0;i<n;i++)
    cin>>numbers[i];
    
    int min;
    int max;
    int sum;
    float average;
    min=max=sum=numbers[0];
    
    for(int i=1;i<n;i++)
    {
       if(numbers[i]<min) min=numbers[i];
       if(numbers[i]>max) max=numbers[i];
       sum+=numbers[i];
     }
     average=((float)sum)/n;
     cout<<"sum =" <<sum<<" , average= "<< average<<"\n";
     cout<<" maximum =" <<max<<" , minimum= "<<min;
       
    system("PAUSE");
    return EXIT_SUCCESS;
}

