#include <iostream>
using namespace std;

class Wallet
{
private:
    int walletID;
    string userName;
    float balance;

public:
    void createWallet(int id, string name, float bal)
    {
        walletID = id;
        userName = name;
        balance = bal;
    }

    void loadMoney(float amount)
    {
        balance += amount;
        cout << "Money Loaded Successfully.\n";
    }

    void transferMoney(Wallet &receiver, float amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            receiver.balance += amount;
            cout << "Transfer Successful.\n";
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }

    void display()
    {
        cout << "\nWallet ID: " << walletID;
        cout << "\nUser Name: " << userName;
        cout << "\nBalance: " << balance << endl;
    }
};

int main()
{
    Wallet w1, w2;

    w1.createWallet(101, "Shadow", 5000);
    w2.createWallet(102, "Alpha", 3000);

    cout << "Before Transfer:\n";
    w1.display();
    w2.display();

    w1.loadMoney(1000);

    w1.transferMoney(w2, 2000);

    cout << "\nAfter Transfer:\n";
    w1.display();
    w2.display();

    return 0;
}