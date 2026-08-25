#include<iostream>
using namespace std;
int main(){

    //reference variable

    int a =5;
    int &temp =a;

    cout<<temp<<endl;
    temp--;
    cout<<temp<<endl;
    a++;
    cout<<a<<endl;
}