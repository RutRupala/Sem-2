#include<iostream>
using namespace std;

int digit(double a){
    static int sum = 0;
    static int temp = 0;
    int i = 0;
    if (a/10 > 0)
    {
        sum += (int)a % 10;
        digit(a/10);
    }
    for (i = 0; sum/10>0; i++)
    {
        temp += sum % 10;
        cout << "temp: " << temp << " sum: "<< sum << endl;
        sum /= 10;
    }
    if (temp != 0)
    {
        cout << "temp: " << temp << " sum: "<< sum << endl;
        return temp;
    }
    
    return sum;
}

int main()
{
    double a;
    cout << "Enter a number: ";
    cin >> a;
    cout << digit(a) << endl;

    return 0;
}