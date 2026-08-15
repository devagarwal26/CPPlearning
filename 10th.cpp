
#include<iostream>
using namespace std;

    



class Solution {
public:
    string determineDayType(int day) {
        if (day == 1) {
            return "Weekday";
        }
        else if (day == 2) {
            return "Weekday";
        }
        else if (day == 3) {
            return "Weekday";
        }
        else if (day == 4) {
            return "Weekday";
        }
        else if (day == 5) {
            return "Weekday";
        }
        else if (day == 6) {
            return "Weekend";
        }
        else if (day == 7) {
            return "Weekend";
        }
        else {
            return "Wrong input";
        }
    }
};
int main(){
    Solution obj;
    obj.determineDayType(1);
}