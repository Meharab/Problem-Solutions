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


main(int argc, char *argv[])
{
      Complex x(3);
      Complex y(4,5);
      Complex z=y.add(x); // here we use the member function for addition
      Complex w=external_add(x,y);// here we use the external function 
      Complex m=external_add(x); // here y will have its default value of 0,0
      show(z);
      show(w);
      show(m);
      if(z==w) cout<<"equal"<<endl; // here we use the overloaded == operator
      Complex a=z+w;              // here we use the overloaded + operator 
      show(a);
            
    system("PAUSE");
   return 0;
}

