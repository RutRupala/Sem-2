#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    map<string, vector<string> > directory;

    int choice;
    string folder, file;

    do
    {
        cout << "\n--- Directory Menu ---";
        cout << "\n1. Add Folder";
        cout << "\n2. Add File";
        cout << "\n3. Display Directory";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Folder Name: ";
            cin >> folder;

            directory[folder];

            cout << "Folder Added.\n";
        }

        else if (choice == 2)
        {
            cout << "Enter Folder Name: ";
            cin >> folder;

            cout << "Enter File Name: ";
            cin >> file;

            directory[folder].push_back(file);

            cout << "File Added.\n";
        }

        else if (choice == 3)
        {
            cout << "\n--- Directory Contents ---\n";

            for (map<string, vector<string> >::iterator it = directory.begin();
                 it != directory.end(); it++)
            {
                cout << "\nFolder: " << it->first << endl;

                for (int i = 0; i < it->second.size(); i++)
                {
                    cout << "  - " << it->second[i] << endl;
                }
            }
        }

    } while (choice != 4);

    return 0;
}