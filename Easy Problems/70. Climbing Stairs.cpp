#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    // int rec(int n,vector<int>& dp){
    //     if(n==0) return 1;
    //     if(n<0) return 0;
    //     if(dp[n] != -1) return dp[n];
    //     return dp[n] = rec(n-1,dp) + rec(n-2,dp);
    // }
    int climbStairs(int n) {
        if(n==0 || n==1) return 1;
        // vector<int> dp(n+1,0);
        // return rec(n,dp);
        // dp[0]=1;
        // dp[1]=1;
        int p = 1,q=1;
        for(int i=2;i<=n;i++){
            // dp[i] = dp[i-1] + dp[i-2];
            int curr = p + q;
            p=q;
            q=curr;
            // if(i>1) dp[i]+=dp[i-2];
        }
        return q;
    }
};