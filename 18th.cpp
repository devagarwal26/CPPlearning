#include<iostream>

using namespace std;
//pass by value
 void solve(int a){
        cout<<a;
        a++;
        cout<<a;
    }
int main(){
   int a=5;
   cout<<a;
   solve(a);
   cout<<a;
   

   string name = "dev";
   cout << name;
   return 0;
}