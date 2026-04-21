#include<iostream>
using namespace std;

int main() {
    int size = 2;
    int *arr = new int(size);
    int index = 0;
    int choice;
    int a;
    
    
    LOOP:
    cout<<"1. Insert" << endl << "2. Delete" << endl << "3. Display" << endl << "4. Exit" << endl;
    cin >> choice;
    switch(choice) {
        case 1:
        if (index == size)
        {
            size = size*2;
            int *newArr;
            newArr = new int(size);
            for (int i = 0; i < index; i++)
            {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = new int(size);
            for (int i = 0; i < index; i++)
                arr[i] = newArr[i];
            delete[] newArr;
            }
            
            cout<<"Enter an integer: ";
            cin >> arr[index];
            index++;
            goto LOOP;
        case 2:
            cout<<"Enter an index to delete: ";
            int delIndex;
            cin >> delIndex;
            if (delIndex < index)
            {
                for (int i = delIndex; i < index-1; i++)
                {
                    arr[i] = arr[i+1];
                }
                index--;
            }
            
            goto LOOP;
        case 3:
            for (int i = 0; i < index; i++)
            {
             cout << arr[i] << " ";   
            }
            goto LOOP;
            
        case 4:
            break;
        default:
            goto LOOP;
    }


    return 0;
}
