#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int a=0,b=0,s=nums[0];

        for(int i=1;i<nums.size();i++)
            s^=nums[i];
        int mask=1;
        while(not(s & mask)) mask<<=1;
        for(int i=0;i<nums.size();i++){
            if(mask & nums[i]) a^=nums[i];
            else b^=nums[i];
        }
        return {a,b};
    }
};