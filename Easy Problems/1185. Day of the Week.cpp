#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string dayOfTheWeek(int d, int month, int y) {
        if(month<3) y--;
        int m[]={0,3,2,5,0,3,5,1,4,6,2,4};
        string days[]= {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int c=y/400-y/100;
        int l=y/4;
        int w=y+l+c+d+m[month-1];
        w%=7;
        return days[w];
    }
};