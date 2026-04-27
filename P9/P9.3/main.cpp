#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, x;

    set<int> s;

    cout << "Enter Number of Elements: ";
    cin >> n;

    cout << "Enter Elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }

    cout << "\nUnique Sorted Elements:\n";

    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}