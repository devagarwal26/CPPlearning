#include <iostream>
using namespace std;
// int sumofarr(){
//      int a[10];
//     for (int i = 0; i <= 9; i++)
//     {
//         cout << "enter data for index " << i << " : " << endl;
//         cin >> a[i];
//     }
//     for(int r = 0; r<=9;r++){
//         cout<<"data in array on index "<<r<<" : "<<a[r]<<endl;
//     }
//       int sum = 0;
//     for(int b=0; b<=9; b++){

//         sum = sum + a[b];
//         if(b>=9){
//             cout<<"sum of a[10] is :"<<sum<< endl;
//         }
//     }

// }
int revarr(int arr[], int size)
{
    // reverse a array
    for (int c = 0; c <= size - 1; c++)
    {
        cout << arr[c];
    }
    cout << endl;

    for (int i = 0; i <= (size - 1) / 2; i++)
    {
        int temp = 0;
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    for (int b = 0; b <= size - 1; b++)
    {
        cout << arr[b];
    }
}
int main()
{
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};
    revarr(arr, size);
    // array in cpp
    //     int a[5] = {1,2,3,4,5};
    //     int mulof2[10]={2,4,6,8,10,12,14,16,18,20};
    //     for(int i =0;i<=9;i++){
    //         cout<<"mul of 2*"<<i+1<<" : "<<mulof2[i]<<endl;
    //     }
    // int arr[10];
    // for (int r=0;r<=9;r++)
    // {
    //     cout<<"enter no for"<<r ;
    //     cin>>arr[r];

    // }
    //     for(int ii =0;ii<=9;ii++){
    //         cout<<"value on "<<ii+1<<" : "<<arr[ii]<<endl;
    // }

    // sumofarr();
}