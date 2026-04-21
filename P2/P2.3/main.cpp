#include <iostream>
using namespace std;

class Account
{
private:
    int accID;
    string name;
    float balance;

public:
    // Default Constructor
    Account()
    {
        accID = 0;
        name = "Unknown";
        balance = 0;
    }

    // Parameterized Constructor
    Account(int id, string n, float b)
    {
        accID = id;
        name = n;
        balance = b;
    }

    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit Successful.\n";
        }
        else
        {
            cout << "Invalid Deposit Amount!\n";
        }
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful.\n";
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }

    void display()
    {
        cout << "\nAccount ID: " << accID;
        cout << "\nCustomer Name: " << name;
        cout << "\nBalance: " << balance << endl;
    }
};

int main()
{
    Account a1;
    Account a2(101, "Shadow", 5000);

    cout << "Account 1:";
    a1.display();

    cout << "\nAccount 2:";
    a2.display();

    a2.deposit(2000);
    a2.withdraw(3000);
    a2.withdraw(10000);

    cout << "\nFinal Account Details:";
    a2.display();

    return 0;
}