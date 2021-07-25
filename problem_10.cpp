#include <iostream>
#include "Comp.h"


using namespace std;

void show (Complex x) 
{
    cout<<x.real<<" + j "<< x.getimg()<<endl; 
    /*note that show as a friend function can access
    *the private data  real directly and also the public as getimg
    */
     } 
template<typename object> object addanything( object x, object y)
{
  return x+y;
}


main(int argc, char *argv[])
{
      Complex x(3,1);
      Complex y(4,5);
      Complex z=addanything<Complex>(x,y);// in this case the function use the overloaded operator
      show(z);      
      int d=addanything<int>(3,5);
      cout<<"now we added integers 3+5= " << d<<endl;
    system("PAUSE");
   return 0;
}

