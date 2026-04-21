#include <iostream>
#include <iomanip>
using namespace std;

// User-defined manipulator
ostream& currency(ostream& out)
{
    out << "Rs. ";
    return out;
}

int main()
{
    string name[5] = {"Shadow", "Alpha", "Rahul", "Priya", "Neha"};
    float marks[5] = {88.56, 91.25, 76.80, 84.40, 95.75};
    float fees[5] = {25000, 26000, 24000, 25500, 27000};

    cout << setfill('=');
    cout << setw(55) << "" << endl;

    cout << setfill(' ');
    cout << left << setw(15) << "Name"
         << setw(15) << "Marks"
         << setw(25) << "Fees" << endl;

    cout << setfill('=');
    cout << setw(55) << "" << endl;

    cout << setfill(' ');

    for (int i = 0; i < 5; i++)
    {
        cout << left << setw(15) << name[i]
             << setw(15) << fixed << setprecision(2) << marks[i]
             << currency << fees[i] << endl;
    }

    cout << setfill('=');
    cout << setw(55) << "" << endl;

    return 0;
}