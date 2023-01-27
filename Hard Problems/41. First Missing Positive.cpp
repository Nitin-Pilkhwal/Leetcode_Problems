#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> c(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 && nums[i]<=nums.size()){
                c[nums[i]]++;
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(c[i]==0)
                return i;
        }
        return nums.size()+1;
    }
};