#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()<=1) return true;
        int i=0;
        int j=s.size()-1;
        while(i<s.size() && j>=0 && i<j){
            
            while(i<j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;
            if((s[i]>='a' && s[i]<='z') && (s[j]>='A' && s[j]<='Z')) {
                if(s[i] - 'a' != s[j] - 'A') {cout<<i<<' '<<j;return false;}
            }
            if(tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};