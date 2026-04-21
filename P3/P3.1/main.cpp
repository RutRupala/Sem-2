#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    float basicSalary;
    float bonus;

public:
    // Constructor with default bonus
    Employee(string n = "Unknown", float bs = 0, float b = 1000)
    {
        name = n;
        basicSalary = bs;
        bonus = b;
    }

    inline float totalSalary()
    {
        return basicSalary + bonus;
    }

    void display()
    {
        cout << "\nEmployee Name: " << name;
        cout << "\nBasic Salary: " << basicSalary;
        cout << "\nBonus: " << bonus;
        cout << "\nTotal Salary: " << totalSalary() << endl;
    }
};

int main()
{
    int n;

    cout << "Enter Number of Employees: ";
    cin >> n;

    Employee *emp = new Employee[n];

    string name;
    float salary, bonus;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> salary;

        cout << "Enter Bonus: ";
        cin >> bonus;

        emp[i] = Employee(name, salary, bonus);
    }

    cout << "\n--- Employee Payroll ---\n";

    for (int i = 0; i < n; i++)
    {
        emp[i].display();
    }

    delete[] emp;

    return 0;
}