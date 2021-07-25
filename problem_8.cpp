#include <iostream>
 void increment(int,int*, int &);

using namespace std;

main(int argc, char *argv[])
{
int x=5;
int y=6;
int z=7;
increment(x,&y,z);
cout<<"x= "<<x<<", y= "<<y<<", z= "<<z;

   system("PAUSE");
   return 0;
}
void increment(int x, int* y, int & z)
{
     x++;
     (*y)++;
     z++;
     
     }

