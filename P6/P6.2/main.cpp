#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Employee : public Person
{
protected:
    int empID;

public:
    Employee(string n, int a, int id) : Person(n, a)
    {
        empID = id;
    }
};

class Manager : public Employee
{
private:
    string department;

public:
    Manager(string n, int a, int id, string dept)
        : Employee(n, a, id)
    {
        department = dept;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nEmployee ID: " << empID;
        cout << "\nDepartment: " << department << endl;
    }
};

int main()
{
    Manager m1("Shadow", 22, 101, "IT");
    Manager m2("Alpha", 30, 102, "Finance");

    cout << "--- Manager 1 Details ---";
    m1.display();

    cout << "\n--- Manager 2 Details ---";
    m2.display();

    return 0;
}