#include <iostream>
#include <unordered_map>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.rbegin(),s.rend());
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1') {
                swap(s[i],s.back());
                break;
            }
        }
        return s;
    }
};