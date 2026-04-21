#include <iostream>
using namespace std;

class Account
{
protected:
    int accNo;
    float balance;

public:
    Account(int no, float bal)
    {
        accNo = no;
        balance = bal;
    }

    void deposit(float amt)
    {
        balance += amt;
    }

    void withdraw(float amt)
    {
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient Balance!\n";
    }

    void display()
    {
        cout << "\nAccount No: " << accNo;
        cout << "\nBalance: " << balance << endl;
    }
};

class SavingsAccount : public Account
{
private:
    float interestRate;

public:
    SavingsAccount(int no, float bal, float rate)
        : Account(no, bal)
    {
        interestRate = rate;
    }

    void showSavings()
    {
        display();
        cout << "Interest Rate: " << interestRate << "%\n";
    }
};

class CurrentAccount : public Account
{
private:
    float overdraft;

public:
    CurrentAccount(int no, float bal, float od)
        : Account(no, bal)
    {
        overdraft = od;
    }

    void withdraw(float amt)
    {
        if (amt <= balance + overdraft)
            balance -= amt;
        else
            cout << "Overdraft Limit Exceeded!\n";
    }

    void showCurrent()
    {
        display();
        cout << "Overdraft Limit: " << overdraft << endl;
    }
};

int main()
{
    SavingsAccount s1(101, 5000, 5);
    CurrentAccount c1(102, 3000, 2000);

    cout << "--- Savings Account ---";
    s1.deposit(1000);
    s1.withdraw(2000);
    s1.showSavings();

    cout << "\n--- Current Account ---";
    c1.deposit(500);
    c1.withdraw(4500);
    c1.showCurrent();

    return 0;
}