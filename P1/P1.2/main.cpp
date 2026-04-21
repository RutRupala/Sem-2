#include <iostream>
using namespace std;

class Book
{
private:
    int bookID;
    string title;
    string author;
    int copies;

public:
    void addBook(int id, string t, string a, int c)
    {
        bookID = id;
        title = t;
        author = a;
        copies = c;
    }

    void issueBook()
    {
        if (copies > 0)
        {
            copies--;
            cout << "Book Issued Successfully.\n";
        }
        else
        {
            cout << "No Copies Available!\n";
        }
    }

    void returnBook()
    {
        copies++;
        cout << "Book Returned Successfully.\n";
    }

    void display()
    {
        cout << "\nBook ID: " << bookID;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nAvailable Copies: " << copies << endl;
    }
};

int main()
{
    Book b1;

    b1.addBook(101, "C++ Basics", "Bjarne", 3);

    cout << "Initial Book Details:\n";
    b1.display();

    b1.issueBook();
    b1.issueBook();

    cout << "\nAfter Issuing 2 Books:\n";
    b1.display();

    b1.returnBook();

    cout << "\nAfter Returning 1 Book:\n";
    b1.display();

    return 0;
}