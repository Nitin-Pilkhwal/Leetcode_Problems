#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isAcronym(vector<string>& words, string str) {
        string s = "";
        for(string a:words){
            s+=a[0];
        }
        return str==s;
    }
};