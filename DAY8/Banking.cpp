#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string AcHolderName;
    double Balance;
    int points;

public:
    BankAccount(string name, double iniBalance, int iniReward)
    {
        AcHolderName = name;
        Balance = iniBalance;
        points = iniReward;
    }

    void withdraw()
    {
        if (Balance >= 500 && points >= 20)
        {
            Balance -= 500;
            points -= 20;
            cout << "Withdrawn Successfully!" << endl;
        }
        else
        {
            cout << "Insuuficient Balance or Reward Points!" << endl;
        }
    }

    void display()
    {
        cout << "------ACCOUNT SUMMARY------" << endl;
        cout << "Acoount Holder: " << AcHolderName << endl;
        cout << "Account Balance: " << Balance << endl;
        cout << "Reward Points: " << points << endl;
    }
};

int main()
{
    BankAccount IshanAcc("ISHAN", 20000, 2000);

    IshanAcc.display();

    cout << "Withdrawl Process" << endl;
    IshanAcc.withdraw();

    IshanAcc.display();

    return 0;
}