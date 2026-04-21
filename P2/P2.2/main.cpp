#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float m1, m2, m3;

public:
    // Default Constructor
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        m1 = m2 = m3 = 0;
    }

    // Parameterized Constructor
    Student(int r, string n, float a, float b, float c)
    {
        rollNo = r;
        name = n;
        m1 = a;
        m2 = b;
        m3 = c;
    }

    float average()
    {
        return (m1 + m2 + m3) / 3;
    }

    void display()
    {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << m1 << ", " << m2 << ", " << m3;
        cout << "\nAverage: " << average() << endl;
    }
};

int main()
{
    Student s1; // default
    Student s2(101, "Shadow", 85, 90, 88);
    Student s3(102, "Alpha", 75, 80, 78);

    cout << "Student 1:";
    s1.display();

    cout << "\nStudent 2:";
    s2.display();

    cout << "\nStudent 3:";
    s3.display();

    return 0;
}