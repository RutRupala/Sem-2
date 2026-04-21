#include <iostream>
using namespace std;

class Fuel
{
protected:
    string fuelType;

public:
    Fuel(string f)
    {
        fuelType = f;
    }
};

class Brand
{
protected:
    string brandName;

public:
    Brand(string b)
    {
        brandName = b;
    }
};

class Car : public Fuel, public Brand
{
private:
    string model;

public:
    Car(string f, string b, string m)
        : Fuel(f), Brand(b)
    {
        model = m;
    }

    void display()
    {
        cout << "\nBrand: " << brandName;
        cout << "\nModel: " << model;
        cout << "\nFuel Type: " << fuelType << endl;
    }
};

int main()
{
    Car c1("Petrol", "Toyota", "Fortuner");
    Car c2("Electric", "Tesla", "Model3");

    cout << "--- Car 1 Details ---";
    c1.display();

    cout << "\n--- Car 2 Details ---";
    c2.display();

    return 0;
}