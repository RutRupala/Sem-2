#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int choice;
    string name, searchName;
    int qty;
    float price;

    do
    {
        cout << "\n--- Inventory Menu ---";
        cout << "\n1. Add Item";
        cout << "\n2. View All Items";
        cout << "\n3. Search Item";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            ofstream fout("inventory.txt", ios::app);

            cout << "Enter Item Name: ";
            cin >> name;

            cout << "Enter Quantity: ";
            cin >> qty;

            cout << "Enter Price: ";
            cin >> price;

            fout << name << " " << qty << " " << price << endl;
            fout.close();

            cout << "Item Added Successfully.\n";
        }

        else if (choice == 2)
        {
            ifstream fin("inventory.txt");

            cout << "\n--- All Items ---\n";

            while (fin >> name >> qty >> price)
            {
                cout << "Name: " << name
                     << "  Qty: " << qty
                     << "  Price: " << price << endl;
            }

            fin.close();
        }

        else if (choice == 3)
        {
            ifstream fin("inventory.txt");
            int found = 0;

            cout << "Enter Item Name to Search: ";
            cin >> searchName;

            while (fin >> name >> qty >> price)
            {
                if (name == searchName)
                {
                    cout << "\nItem Found:\n";
                    cout << "Name: " << name
                         << "  Qty: " << qty
                         << "  Price: " << price << endl;

                    found = 1;
                }
            }

            if (found == 0)
                cout << "Item Not Found!\n";

            fin.close();
        }

    } while (choice != 4);

    return 0;
}