
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /* this program prints all the numbers from 1 to 20 that its second and third bits are 1.
      ECE 250
      Hany Samuel*/
      
    for(int i=1;i<20;i++)
    {
        if((i&6)==6) 
            cout<<i<<endl;
        
            }
    system("PAUSE");
    return EXIT_SUCCESS;
}
