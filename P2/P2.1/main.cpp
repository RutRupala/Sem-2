#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    void setData(float l, float w)
    {
        if (l > 0 && w > 0)
        {
            length = l;
            width = w;
        }
        else
        {
            cout << "Invalid Dimensions!\n";
            length = width = 1;
        }
    }

    float area()
    {
        return length * width;
    }

    float perimeter()
    {
        return 2 * (length + width);
    }

    void display()
    {
        cout << "\nLength: " << length;
        cout << "\nWidth: " << width;
        cout << "\nArea: " << area();
        cout << "\nPerimeter: " << perimeter() << endl;
    }
};

int main()
{
    Rectangle r1, r2;

    r1.setData(10, 5);
    r2.setData(7, 7);

    cout << "Rectangle 1:";
    r1.display();

    cout << "\nRectangle 2:";
    r2.display();

    return 0;
}