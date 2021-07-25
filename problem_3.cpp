#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /* this program to print all the numbers that are dividable by 3 or 4 
    *  ranges  from 1 to n
    * ECE 250
    * Hany Samuel            */
   
    int n;
    cout<<"please enter n \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
     if( i%3==0 || i%4==0)
         cout<<i<<"\n";
            }
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
