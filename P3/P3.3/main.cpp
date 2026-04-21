#include <iostream>
using namespace std;

class Account
{
private:
    int accNo;
    string name;
    float balance;

public:
    static int totalAccounts;

    Account()
    {
        accNo = 0;
        name = "Unknown";
        balance = 0;
        totalAccounts++;
    }

    Account(int no, string n, float b)
    {
        accNo = no;
        name = n;
        balance = b;
        totalAccounts++;
    }

    void transfer(Account &receiver, float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            receiver.balance += amount;
            cout << "Transfer Successful.\n";
        }
        else
        {
            cout << "Invalid Transfer!\n";
        }
    }

    void display()
    {
        cout << "\nAccount No: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }

    static void showTotalAccounts()
    {
        cout << "\nTotal Accounts Created: " << totalAccounts << endl;
    }
};

int Account::totalAccounts = 0;

int main()
{
    int n;

    cout << "Enter Number of Accounts: ";
    cin >> n;

    Account *acc = new Account[n];

    int no;
    string name;
    float bal;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Account No: ";
        cin >> no;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Balance: ";
        cin >> bal;

        acc[i] = Account(no, name, bal);
    }

    cout << "\n--- Account Details ---\n";

    for (int i = 0; i < n; i++)
        acc[i].display();

    acc[0].transfer(acc[1], 1000);

    cout << "\n--- After Transfer ---\n";

    for (int i = 0; i < n; i++)
        acc[i].display();

    Account::showTotalAccounts();

    delete[] acc;

    return 0;
}