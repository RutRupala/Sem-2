#include <iostream>
#include <cmath>
using namespace std;

// Custom Exception Class
class NegativeNumberException
{
public:
    void message()
    {
        cout << "Exception: Negative number not allowed for square root.\n";
    }
};

int main()
{
    float num;

    try
    {
        cout << "Enter Number: ";
        cin >> num;

        if (num < 0)
            throw NegativeNumberException();

        cout << "Square Root = " << sqrt(num) << endl;
    }
    catch (NegativeNumberException e)
    {
        e.message();
    }

    return 0;
}