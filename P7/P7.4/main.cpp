#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area Function of Shape\n";
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void area()
    {
        cout << "Rectangle Area = " << length * width << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area()
    {
        cout << "Circle Area = " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Shape *ptr;

    Rectangle r(10, 5);
    Circle c(7);

    ptr = &r;
    ptr->area();

    ptr = &c;
    ptr->area();

    return 0;
}