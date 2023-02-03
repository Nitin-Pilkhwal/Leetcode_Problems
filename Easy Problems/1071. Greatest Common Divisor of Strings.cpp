#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int s1=str1.size();
        int s2=str2.size();
        if(str1+str2 != str2+str1)
            return "";
        return str1.substr(0,gcd(s1,s2));
    }
};