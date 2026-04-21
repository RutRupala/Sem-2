#include<iostream>
using namespace std;

int main()
{
    int *a;
    a = new int[5];
    for(int i=0; i<5; i++)
    {
        a[i] = i+1;
    }
    int *b;
    b = new int[5];
    for(int i=0; i<5; i++)
    {
        b[i] = a[i]+2;
    }

    int *c = new int[10];
    for(int i=0; i<10; i++)
    {
        if(i<5)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i-5];
        }
    }   
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (c[i]>c[j])
            {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }
    
    
}