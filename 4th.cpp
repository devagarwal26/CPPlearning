#include <iostream>
using namespace std;
int main()
{

    // int budget;
    // cout << " enter your budget" << endl;
    // cin >> budget;

    // if (budget > 2000000)
    // {
    //     cout << "you can buy a car " << endl;
    // }
    // else{
    //     cout<<"you can not buy car"<< endl;
    // }

    //     int marks;
    //     cout<<" enter marks"<<endl;
    //     cin>> marks;

    //     if(marks>90){
    //         cout<< "A";

    //     }
    //     else if(marks >80){
    //         cout<< "B";

    //     }
    // else if (marks>70){
    //     cout<<"C";

    // }
    // else{
    //     cout<< "fail"<<endl;
    // }

    float height;
    cout << "enter height" << endl;
    cin >> height;

    float weight;
    cout << " enter weight" << endl;
    cin >> weight;

    if (height > 5)
    {
        if (weight > 70)
        {
            cout << "good BMI";
        }
        else
        {
            cout << " weight badhao";
        }
    }
    else
    {
        cout << " height badhao";
    }

    return 0;
}