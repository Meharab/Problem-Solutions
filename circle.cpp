#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /* this program caculate the circle area given the radius entered by the user
      ECE 250
      Hany Samuel*/
      
    double radius;
    const double PI=3.14;
    cout<<"please enter the radius \n";
    cin>>radius;
    double area=PI*(radius*radius);
    cout<<"the area is = "<<area<<"\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
