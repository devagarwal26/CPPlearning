#include <iostream>
#include <cstring>
using namespace std;
// int main()
// { //memset
//     int arr[5];

//     memset(arr, 0, sizeof(arr));

//     for (int x : arr)
//         cout << x << " ";

//         //swap
//     int a = 10;
//     int b = 20;

//     swap(a, b);

//     cout << a << " " << b;
// }


//2d array
int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
 cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
   
}