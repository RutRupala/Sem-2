#include <iostream>
using namespace std;

// Display Array
template <class T>
void display(T arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Find Maximum
template <class T>
T maximum(T arr[], int n)
{
    T max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

// Reverse Array
template <class T>
void reverseArray(T arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        T temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main()
{
    int a[] = {10, 50, 30, 20};
    float b[] = {1.1, 5.5, 2.2, 4.4};
    char c[] = {'A', 'Z', 'C', 'M'};

    cout << "Integer Array: ";
    display(a, 4);
    cout << "Max = " << maximum(a, 4) << endl;
    reverseArray(a, 4);
    cout << "Reversed: ";
    display(a, 4);

    cout << "\nFloat Array: ";
    display(b, 4);
    cout << "Max = " << maximum(b, 4) << endl;
    reverseArray(b, 4);
    cout << "Reversed: ";
    display(b, 4);

    cout << "\nChar Array: ";
    display(c, 4);
    cout << "Max = " << maximum(c, 4) << endl;
    reverseArray(c, 4);
    cout << "Reversed: ";
    display(c, 4);

    return 0;
}