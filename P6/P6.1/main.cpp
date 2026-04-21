#include <iostream>
using namespace std;

class Shape
{
protected:
    float radius;

public:
    void setRadius(float r)
    {
        if (r > 0)
            radius = r;
        else
            radius = 0;
    }
};

class Circle : public Shape
{
public:
    float area()
    {
        return 3.14 * radius * radius;
    }

    void display()
    {
        cout << "\nRadius: " << radius;
        cout << "\nArea: " << area() << endl;
    }
};

int main()
{
    int n;

    cout << "Enter Number of Circles: ";
    cin >> n;

    Circle c[n];

    for (int i = 0; i < n; i++)
    {
        float r;
        cout << "\nEnter Radius of Circle " << i + 1 << ": ";
        cin >> r;
        c[i].setRadius(r);
    }

    cout << "\n--- Circle Details ---\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nCircle " << i + 1;
        c[i].display();
    }

    return 0;
}