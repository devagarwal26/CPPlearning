#include <iostream>
using namespace std;
int  printcounting(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;

    }
}

int intrest(int p,int r, int t){
    int si= ((p*r*t)/100) ;
    cout<<"Simple Intrest:"<<si<<endl;
    int A = p+si;
    cout<<"total amount: "<<A;

}

int voting(int age){
    if(age>=18){
        cout<<"eligible for voting"<<endl;
    }
    else{
        cout<<"not eligible for voting"<<endl;
    }
}
int main()
{
    cout << " what is function" << endl;
    cout << "write no for counting" << endl;
    int n;
    cin >> n;
    printcounting(n);
    cout<<"enter Principal:";
    int p,r,t;
    cin>>p;
    cout<<"enter Rate of intrest in year:";
    cin>>r;

    cout<<"enter time in year:";
    cin>>t;
    intrest(p,r,t);
int age;
cout<<"enter age:";
cin>>age;
voting(age);



    return 0;
}