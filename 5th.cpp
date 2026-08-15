#include<iostream>
using namespace std;
int main(){
    int grade;
    cout<< " enter your grade :" << endl;
    cin>> grade;
     switch (grade)
     {
     case 'a':
     cout<<" marks 90-100"<< endl;
        break;
     
        case 'b':
     cout<<" marks 80-90"<< endl;
        break;
        case 'c':
     cout<<" marks 70-80"<< endl;
        break;
        case 'd':
     cout<<" fail"<< endl;
        break;
     default:
     cout<< " wrong ans ";
        break;
     }
}