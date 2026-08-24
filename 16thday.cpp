#include <iostream>
#include<cstring>
using namespace std;
//strings

int  main(){

    string name;

    string surname = "agarwal";
    cout<<surname;

}






// char array
// int getlength(char arr[])
// {
//     int count = 0;
//     int index = 0;
//     while (arr[index] != '\0')
//     {
//         count++;
//         index++;
//     }

//     return count;
// }

// int concatarray(char a[], char b[])
// {
//     int aindex = getlength(a);
//     int bindex = 0;
//     while (b[bindex] != '\0')
//     {
//         a[aindex] = b[bindex];
//         aindex++;
//         bindex++;
//     }
//     a[aindex] = '\0';
// }

// // comparison
// int comp(char a[], char b[])
// {
//     int aindex = 0;
//     int bindex = 0;
//     int alength = getlength(a);
//     while (aindex <= alength)
//     {
//         if (a[aindex] != b[bindex])
//         {

//             return false;
//         }
//         else
//         {
//             aindex++;
//             bindex++;
//         }
//     }
//     return true;
// }

// int main()
// {

//     //using functions
//     char a[100] = "dev";
//     char b[100];

//     strcpy(b,a);
//     cout<<b;


//     // comparison 

//     // char a[] = "drv";
//     // char b[] = "dev";
//     // cout << comp(a, b);

//     // concatenation
//     //  char a[80] = "love";
//     //  char b[80] = "animals";
//     //  concatarray(a, b);
//     //  cout<<a;
//     //  char arr[] = "devagarwal";
//     //  cout << getlenth(arr) << endl;
// }
