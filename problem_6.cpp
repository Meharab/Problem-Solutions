#include <iostream>

using namespace std;

main(int argc, char *argv[])
{
int n;
 cout<<"please enter n \n";
 cin>>n;
 int absn=n;
 if(n<0)  // we deal the positive numbers
{
          absn=-n;
}
  bool prime=true; // we assume it is prime untill we proof it is not

  for(int i=2;i<absn;i++)
  {
     if(n%i==0) prime=false;
          }
  if(absn==2) prime=true;
  if(prime) cout<<n<<" is prime"<<endl;
  else      cout<<n<<" is not prime"<<endl;
   system("PAUSE");
   return 0;
}
