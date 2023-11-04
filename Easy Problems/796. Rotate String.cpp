#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal) return true;
        if(s.size() != goal.size()) return false;

        int n=s.size();
        int i=1;
        while(i<=n){
            char last = s[n-1];
            s = last + s.substr(0,n-1);
            if(s==goal) return true;
            i++;
        }
        return false;
    }
};