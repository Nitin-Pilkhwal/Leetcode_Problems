#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int s=0,e=0;
        int sum_to_take = accumulate(nums.begin(),nums.end(),0);
        int maxi = 0;
        int sum_to_take = sum_to_take - x;
        if (sum_to_take==0) return nums.size();

        int sum=0;
        while(e<nums.size()){
            sum+=nums[e];
            while(s<=e && sum>sum_to_take) sum-=nums[s++];
            if(sum==sum_to_take) maxi = max(maxi,e-s+1);
            e++;
        }

        return maxi==0 ? -1: nums.size() - maxi;
    }
};