#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << endl;
}

int main()
{
    int n, x;

    cout << "Enter Number of Elements: ";
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cout << "\nOriginal Vector: ";
    display(v);

    // Method 1: std::reverse()
    vector<int> v1 = v;
    reverse(v1.begin(), v1.end());

    cout << "Reversed using std::reverse(): ";
    display(v1);

    // Method 2: Manual Iterators
    vector<int> v2 = v;

    vector<int>::iterator start = v2.begin();
    vector<int>::iterator end = v2.end() - 1;

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Reversed using Iterators: ";
    display(v2);

    return 0;
}