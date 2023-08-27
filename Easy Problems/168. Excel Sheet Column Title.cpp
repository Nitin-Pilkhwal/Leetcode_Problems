#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        if(columnNumber < 27){
            return string(1,'A' + (columnNumber-1));
        }
        string ans="";
        while(columnNumber>0){
            if(columnNumber%26==0){
                ans+='Z';
                columnNumber--;
            }
            else{
                ans+='A' + columnNumber%26 -1;
            }
            columnNumber/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};