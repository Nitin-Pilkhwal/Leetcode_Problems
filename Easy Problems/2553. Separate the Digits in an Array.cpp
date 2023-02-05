#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            string s;
            s=to_string(nums[i]);
            // cout<<s;
            for(int j=0;j<s.size();j++){
                int x=s[j]-48;
                v.push_back(x);
            }
        }
        return v;
    }
};