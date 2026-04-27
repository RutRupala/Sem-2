#include <iostream>
using namespace std;

class Grading
{
protected:
    float marks;

public:
    Grading(float m)
    {
        marks = m;
    }

    virtual void computeGrade() = 0; // Pure Virtual Function
};

class Undergraduate : public Grading
{
public:
    Undergraduate(float m) : Grading(m) {}

    void computeGrade()
    {
        cout << "Undergraduate Grade: ";

        if (marks >= 75)
            cout << "A";
        else if (marks >= 60)
            cout << "B";
        else if (marks >= 40)
            cout << "C";
        else
            cout << "Fail";

        cout << endl;
    }
};

class Postgraduate : public Grading
{
public:
    Postgraduate(float m) : Grading(m) {}

    void computeGrade()
    {
        cout << "Postgraduate Grade: ";

        if (marks >= 80)
            cout << "A";
        else if (marks >= 65)
            cout << "B";
        else if (marks >= 50)
            cout << "C";
        else
            cout << "Fail";

        cout << endl;
    }
};

int main()
{
    Grading *ptr;

    Undergraduate ug(72);
    Postgraduate pg(72);

    ptr = &ug;
    ptr->computeGrade();

    ptr = &pg;
    ptr->computeGrade();

    return 0;
}