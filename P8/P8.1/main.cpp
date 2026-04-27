#include <iostream>
using namespace std;

int main()
{
    int a, b;

    try
    {
        cout << "Enter First Integer: ";
        cin >> a;

        if (cin.fail())
            throw "Invalid Input for First Number!";

        cout << "Enter Second Integer: ";
        cin >> b;

        if (cin.fail())
            throw "Invalid Input for Second Number!";

        if (b == 0)
            throw "Division by Zero Error!";

        cout << "Result = " << a / b << endl;
    }
    catch (const char *msg)
    {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}