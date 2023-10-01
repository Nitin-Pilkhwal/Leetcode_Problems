#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char x='\0';
        for(auto &c : s) x^=c;
        for(auto &c : t) x^=c;
        return x;
    }
};