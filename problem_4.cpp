#include <iostream>
  int factorial(int);

using namespace std;

main(int argc, char *argv[])
{
   /* this program to calculate factorial n (n!) 
    * ECE 250
   * Hany Samuel            */

int n;
 cout<<"please enter n \n";
 cin>>n;
 if(n<0)  // we can not calculate the factorial of negative numbers 
{
cout<<" can not calculate the factorial of a negative number"<<endl;
system("PAUSE");
return 0; // we end the program, we can use exit ; instead
}
  int result=factorial(n);
   cerr<<result<<"\n";
   system("PAUSE");
   return 0;
}
int factorial(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
     {
        fact=fact*i;  // can be written fact *=i;
     }
     return fact;
        
}
