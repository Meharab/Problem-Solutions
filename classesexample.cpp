#include <cstdlib>
#include <iostream>

using namespace std;

class Complex
{
      private:
              double real;
              double img;
      public:
             Complex(double r):real(r),img(0)
             { }
             Complex(double r, double i):real(r),img(i)
             { }
      double getReal() const
      {   return real;  }
      
      double getimg() const
      {   return img;  }
      void setReal(double r)
      { real=r;}
      void setImg(double i)
      { img=i;}
      Complex add(Complex x)
      {
           double r=real + x.real;
           double i=img+x.img;
           return Complex(r,i);
       }
    friend void show(Complex );   // declaring friend function  
       
};

void show(Complex x)
{
     cout<<x.real<<" + j "<< x.getimg()<<" ";
     } 
      

int main(int argc, char *argv[])
{
   /* this program to demonstrate the classes

      ECE 250
      Hany Samuel*/
      Complex x(3);
      Complex y(4,5);
      Complex z=y.add(x);
      show(z);

    system("PAUSE");
    return EXIT_SUCCESS;
}

