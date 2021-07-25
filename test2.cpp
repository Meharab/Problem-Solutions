#include<iostream>

using namespace std;

class Car
{
    int amountOfFuel;
    int numberOfWheel;
    double amount;
    public:

        Car()       // constructor
        {
            amountOfFuel = 10;
            numberOfWheel = 4;
        }
        Car(int fuel, int wheel)
        {
            amountOfFuel = fuel;
            numberOfWheel = wheel;
        }
        void addFuel(int xLitre)
        {
            amountOfFuel += xLitre;
        }
        void addExtraWheel(int extraWheel)
        {
            numberOfWheel += extraWheel;
        }
        void showInformation()
        {
            cout<<"Fuel = "<<amountOfFuel<<endl;
            cout<<"Wheel = "<<numberOfWheel<<endl<<endl
            ;
        }

};

int main()
{
    Car toyota(100,7),abc(50,6);
    toyota.showInformation();
    abc.showInformation();
    return 0;
}




