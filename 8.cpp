#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 5; i++);
    { 
        cout << "dev" << endl;
    }

    int i = 0;// initalization
    do
    {
        cout << i << endl;// logic
        i++;// update

    } while (i <= 5);// condition



    for (int i = 0; i <= 3; i++)
    {for(int j = 0; j <= 5; j++)
    { 
        cout << i<<" "<<j << endl;
    }}
}
