#include <iostream>
#include <cmath>
using namespace std;

class Loan
{
private:
    int loanID;
    string name;
    float amount;
    float annualRate;
    int months;

public:
    // Default Constructor
    Loan()
    {
        loanID = 0;
        name = "Unknown";
        amount = 0;
        annualRate = 0;
        months = 1;
    }

    // Parameterized Constructor
    Loan(int id, string n, float a, float rate, int m)
    {
        loanID = id;
        name = n;
        amount = a;
        annualRate = rate;
        months = m;
    }

    float calculateEMI()
    {
        float r = annualRate / 12 / 100;
        float emi = (amount * r * pow(1 + r, months)) /
                    (pow(1 + r, months) - 1);
        return emi;
    }

    void display()
    {
        cout << "\nLoan ID: " << loanID;
        cout << "\nApplicant Name: " << name;
        cout << "\nLoan Amount: " << amount;
        cout << "\nInterest Rate: " << annualRate << "%";
        cout << "\nTenure: " << months << " months";
        cout << "\nMonthly EMI: " << calculateEMI() << endl;
    }
};

int main()
{
    Loan l1;
    Loan l2(101, "Shadow", 500000, 10, 24);

    cout << "Default Loan:";
    l1.display();

    cout << "\nCustomer Loan:";
    l2.display();

    return 0;
}