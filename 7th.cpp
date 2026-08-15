#include <iostream>
using namespace std;
int main()
{
    // break the loof
    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << "Dev" << i << endl;
    }

    // skip the itereation
    for (int i = 0; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << "Dev" << i << endl;
    }

    int i = 1;
    while (i <= 5)
    {
        cout << "dev" << i << endl;
        i++;
    }

    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        cout << ch << endl;
    }
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        cout << ch << endl;
    }
    for (int i = 0; i <= 100; i++)
    {
        cout << i << endl;
    }

     for (int i = 100; i >= 1; i--)
    {
        cout << i << endl;
    }
     for (int i = 0; i >= -10; i--)
    {
        cout << i << endl;
    }
     for (int i = 0; i <= 50; i++)
    {
        cout << "DEV"<<i << endl;
    }


    return 0;
}