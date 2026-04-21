#include <iostream>
using namespace std;

class Item
{
private:
    int itemID;
    string itemName;
    float price;
    int quantity;

public:
    // Default Constructor
    Item()
    {
        itemID = 0;
        itemName = "Unknown";
        price = 0;
        quantity = 0;
    }

    // Parameterized Constructor
    Item(int id, string name, float p, int q)
    {
        itemID = id;
        itemName = name;
        price = p;
        quantity = q;
    }

    void addStock(int qty)
    {
        quantity += qty;
        cout << "Stock Added Successfully.\n";
    }

    void sellItem(int qty)
    {
        if (qty <= quantity)
        {
            quantity -= qty;
            cout << "Sale Successful.\n";
        }
        else
        {
            cout << "Insufficient Stock!\n";
        }
    }

    void display()
    {
        cout << "\nItem ID: " << itemID;
        cout << "\nItem Name: " << itemName;
        cout << "\nPrice: " << price;
        cout << "\nQuantity: " << quantity << endl;
    }
};

int main()
{
    Item i1;
    Item i2(101, "Keyboard", 1500, 10);

    cout << "Default Item:";
    i1.display();

    cout << "\nStore Item:";
    i2.display();

    i2.addStock(5);
    i2.sellItem(8);
    i2.sellItem(20);

    cout << "\nFinal Item Details:";
    i2.display();

    return 0;
}