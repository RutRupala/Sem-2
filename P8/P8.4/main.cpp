#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string filename;
    ifstream fin;
    string line;

    while (true)
    {
        cout << "Enter File Name: ";
        cin >> filename;

        fin.open(filename);

        if (fin.is_open())
            break;

        cout << "File Not Found! Try Again.\n";
    }

    int num;
    int count = 0;
    int sum = 0;
    int lineNo = 0;

    while (fin >> line)
    {
        lineNo++;

        try
        {
            num = stoi(line);   // convert string to int

            sum += num;
            count++;
        }
        catch (...)
        {
            cout << "Corrupted Data at Line "
                 << lineNo << ": " << line << endl;
        }
    }

    fin.close();

    cout << "\nValid Numbers Count = " << count;
    cout << "\nSum = " << sum;

    if (count > 0)
        cout << "\nAverage = " << (float)sum / count;

    cout << endl;

    return 0;
}