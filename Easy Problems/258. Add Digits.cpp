#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            string s = to_string(num);
            num=0;
            for(int i=0;i<s.length();i++){
                num+=(s[i]-'0');
            }
        }
        return num;
    }
};