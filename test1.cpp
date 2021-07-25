#include<iostream>
using namespace std;

class ATM
{
    private:
        int balance;
    public:
        ATM()
        {
            balance=500;
        }
        void deposit(int x)
        {
            balance = balance + x;
        }
        void withdraw(int y)
        {
            if(balance<y)
                cout<<"u r the foinni.... get lost..."<<endl;
            else
                balance = balance - y;
        }
        void balanceCheck()
        {
            cout<<"Your Current Balance = "<<balance<<endl;
        }
};

int main()
{
    ATM dcc;
    dcc.balanceCheck();
    dcc.deposit(-10000);
    dcc.balanceCheck();
    dcc.withdraw(2200);
    dcc.balanceCheck();
    return 0;

}
