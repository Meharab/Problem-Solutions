#include <iostream>
#include "fact.h"

using namespace std;

main(int argc, char *argv[])
{
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
   cout<<result<<"\n";
   system("PAUSE");
   return 0;
}
