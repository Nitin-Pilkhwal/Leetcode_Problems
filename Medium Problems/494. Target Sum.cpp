#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int fun(vector<int>& nums,int i, int target){
        if(i==-1){
            if(target==0) return 1;
            return 0;
        }
        int sub=0,add=0;
        sub = fun(nums,i-1,target-nums[i]);
        add = fun(nums,i-1,target+nums[i]);

        return sub + add;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return fun(nums,n-1,target);
    }
};