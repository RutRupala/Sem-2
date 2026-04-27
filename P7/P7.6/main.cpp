#include <iostream>
using namespace std;

// Case 1: Non-Virtual Destructor
class Base1
{
public:
    ~Base1()
    {
        cout << "Base1 Destructor Called\n";
    }
};

class Derived1 : public Base1
{
private:
    int *ptr;

public:
    Derived1()
    {
        ptr = new int[5];
        cout << "Derived1 Constructor Called\n";
    }

    ~Derived1()
    {
        delete[] ptr;
        cout << "Derived1 Destructor Called\n";
    }
};

// Case 2: Virtual Destructor
class Base2
{
public:
    virtual ~Base2()
    {
        cout << "Base2 Destructor Called\n";
    }
};

class Derived2 : public Base2
{
private:
    int *ptr;

public:
    Derived2()
    {
        ptr = new int[5];
        cout << "Derived2 Constructor Called\n";
    }

    ~Derived2()
    {
        delete[] ptr;
        cout << "Derived2 Destructor Called\n";
    }
};

int main()
{
    cout << "--- Without Virtual Destructor ---\n";
    Base1 *p1 = new Derived1();
    delete p1;

    cout << "\n--- With Virtual Destructor ---\n";
    Base2 *p2 = new Derived2();
    delete p2;

    return 0;
}