#include <iostream>
  int factorial(int);

using namespace std;

main(int argc, char *argv[])
{
   /* this program to check if the number n is prime or not  
    * ECE 250
   * Hany Samuel            */

int n;
 cout<<"please enter n \n";
 cin>>n;
bool prime=true; // first assume it is prime untill else is proven
for(int i=2;i<n;i++)
{
        if(n%i==0) prime=false;
}
if(prime) cout<<n<<" is prime"<<endl;
else    cout<<n<<" is not prime"<<endl;

  system("PAUSE");
  return 0;
        
}
