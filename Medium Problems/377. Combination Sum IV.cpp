#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int fun(vector<int>& nums, int target,int i,vector<int>& dp){
        if(target<0){
            return 0;
        }
        if(target==0) return 1;
        if(dp[target] != -1) return dp[target];
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans += fun(nums,target-nums[i],i,dp);
        }
        return dp[target]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> dp(target+1,-1);
        // return fun(nums,target,n-1,dp);
        dp[0]=1;
        for(int i=1;i<=target;i++){
            long ans=0;
            for(int j=0;j<n;j++){
                if(i>=nums[j])
                ans += dp[i-nums[j]];
            }
            dp[i]=ans;
        }
        return dp[target];
    }
};