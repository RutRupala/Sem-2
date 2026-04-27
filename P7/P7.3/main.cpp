#include <iostream>
using namespace std;

class Fahrenheit;

class Celsius
{
private:
    float temp;

public:
    Celsius(float t = 0)
    {
        temp = t;
    }

    float getTemp()
    {
        return temp;
    }

    operator Fahrenheit();

    bool operator ==(Celsius c)
    {
        return temp == c.temp;
    }

    void display()
    {
        cout << temp << " C" << endl;
    }
};

class Fahrenheit
{
private:
    float temp;

public:
    Fahrenheit(float t = 0)
    {
        temp = t;
    }

    float getTemp()
    {
        return temp;
    }

    operator Celsius()
    {
        return Celsius((temp - 32) * 5 / 9);
    }

    void display()
    {
        cout << temp << " F" << endl;
    }
};

Celsius::operator Fahrenheit()
{
    return Fahrenheit((temp * 9 / 5) + 32);
}

int main()
{
    Celsius c1(100), c2;
    Fahrenheit f1, f2(32);

    f1 = c1;   // Celsius to Fahrenheit
    c2 = f2;   // Fahrenheit to Celsius

    cout << "Celsius Value: ";
    c1.display();

    cout << "Converted to Fahrenheit: ";
    f1.display();

    cout << "\nFahrenheit Value: ";
    f2.display();

    cout << "Converted to Celsius: ";
    c2.display();

    if (c2 == Celsius(0))
        cout << "\nTemperatures are Equal.\n";
    else
        cout << "\nTemperatures are Not Equal.\n";

    return 0;
}