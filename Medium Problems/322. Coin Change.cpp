#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <limits.h>
using namespace std;

class Solution {
public:
    int fun(int i,vector<int> coins,int amount,vector<vector<int>> &dp){
        if(amount==0) return 0;
        if(i==0){
            if(amount%coins[i]==0) return amount/coins[i];
            else return 1e5;
        }
        if(dp[i][amount] != -1) return dp[i][amount];
        int notpick,pick=INT_MAX;
        notpick = 0 + fun(i-1,coins,amount,dp);
        if(coins[i]<=amount) pick = 1 + fun(i,coins,amount-coins[i],dp);
        return dp[i][amount]=min(notpick,pick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        // vector<vector<int>> dp(n,vector<int>(amount+1,0));
        // int ans = fun(n-1,coins,amount,dp);
        // if(ans>=1e5) return -1;
        // return ans;

        vector<int> prev(amount+1,0),curr(amount+1,0);
        for(int i=0;i<=amount;i++){
            if(i%coins[0]==0) prev[i] = i/coins[0];
            else prev[i]=1e5;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<=amount;j++){
                int notpick,pick=INT_MAX;
                notpick = 0 + prev[j];
                if(coins[i]<=j) pick = 1 + curr[j-coins[i]];
                curr[j]=min(notpick,pick);
            }
            prev = curr;
        }
        int ans = prev[amount];
        if(ans>=1e5) return -1;
        return ans;
    }
};