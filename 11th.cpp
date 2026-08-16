#include<iostream>
using namespace std;
int main(){

    // implicit type casting 
    int num1 = 4;
    float num2 = 3.4;
    char ch = 'A'; //A = 65
    float result = num1+num2;
    int result2 = num1+num2;
    int a = ch +num1;
    char b = ch + num1;
    cout<<result<<endl<<result2<<endl<< a<<endl<<b<<endl;


    // explicit type casting
    int A = 34;
    float B = 5.5;
    int R = A + (int)B;
    cout<<R;
 double pi = 3.1415;
 int pi1 = (int)pi;
 cout<<endl<<pi1;
}