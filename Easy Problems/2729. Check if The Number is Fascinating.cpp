#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isFascinating(int n) {
        string s=to_string(n) + to_string(2*n) + to_string(3*n);
        if(s.length()<9) return false;
        int a[10]={0};
        for(int i=0;i<s.length();i++)
            a[s[i]-'0']++;
        if(a[0]>0) false;
        for(int i=1;i<=9;i++)
            if(a[i]!=1) return false;
        return true;
    }
};