#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        vector<int> dp(target+1,-1);
        dp[0] = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=target;j>=nums[i];j--){
                if(dp[j-nums[i]]!=-1){
                    dp[j] = max(dp[j],dp[j-nums[i]]+1);
                }
            }
        }
        
        return dp[target];
    }
};
