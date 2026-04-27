#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // + Operator Overloading
    Complex operator +(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    // - Operator Overloading
    Complex operator -(Complex c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }
};

int main()
{
    Complex c1(5, 3), c2(2, 4), c3, c4;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    c3 = c1 + c2;
    c4 = c1 - c2;

    cout << "\nAddition Result: ";
    c3.display();

    cout << "Subtraction Result: ";
    c4.display();

    return 0;
}