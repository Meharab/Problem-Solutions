#include<iostream>
using namespace std;

class Bank
{
    private:
        int balance;
    public:
        Bank()
        {
            balance = 1000;
        }
        void deposit(int x)
        {
            balance = balance + x;
        }

        void withdraw(int x)
        {
            balance = balance - x;
        }
        void checkMyBalance()
        {
            cout<<"Your current balance = "<<balance<<endl;
        }
};

int main()
{
    Bank user1, user2;
    user1.checkMyBalance();
    user2.checkMyBalance();

    // deposit
    user1.deposit(1500);
    user1.checkMyBalance();
    user2.checkMyBalance();







    return 0;
}

