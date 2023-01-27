#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int ans=INT_MAX;
        int sum=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>=target && left<=right){
                sum-=nums[left];
                ans=min(ans,right-left+1);
                left++;
            }
        }
        return (ans==INT_MAX)?0:ans;
    }
};