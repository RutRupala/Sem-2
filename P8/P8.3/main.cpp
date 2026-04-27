#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance;

public:
    BankAccount(float b = 0)
    {
        balance = b;
    }

    void deposit(float amt)
    {
        if (amt <= 0)
            throw "Invalid Deposit Amount!";

        balance += amt;
        cout << "Deposit Successful.\n";
    }

    void withdraw(float amt)
    {
        if (amt > balance)
            throw "Insufficient Balance!";

        balance -= amt;
        cout << "Withdrawal Successful.\n";
    }

    void showBalance()
    {
        cout << "Current Balance = " << balance << endl;
    }
};

void transaction(BankAccount &acc)
{
    cout << "Entering transaction()\n";

    acc.withdraw(7000);   // causes exception if balance low

    cout << "Leaving transaction()\n";
}

void process(BankAccount &acc)
{
    cout << "Entering process()\n";

    transaction(acc);

    cout << "Leaving process()\n";
}

int main()
{
    BankAccount acc(5000);

    try
    {
        cout << "Entering main()\n";

        acc.deposit(1000);

        process(acc);

        cout << "Leaving main()\n";
    }
    catch (const char *msg)
    {
        cout << "Exception Caught: " << msg << endl;
    }

    acc.showBalance();

    return 0;
}