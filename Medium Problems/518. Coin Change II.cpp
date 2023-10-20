#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int fun(int ind,int target,vector<int>coins,vector<vector<int>>& dp){
        if(ind==0){
            return (target % coins[0]==0);
        }
        if(dp[ind][target] != -1) return dp[ind][target];
        int take=0,nottake;
        nottake = fun(ind-1,target,coins,dp);
        if(coins[ind]<=target) take = fun(ind,target-coins[ind],coins,dp);
        return dp[ind][target] = take + nottake;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,0));
        // return fun(n-1,amount,coins,dp);
        for(int i=0;i<=amount;i++){
            dp[0][i] = (i%coins[0]==0);
        }

        for(int i=1;i<n;i++){
            for(int j=0;j<=amount;j++){
                int take =0,nottake;
                nottake = dp[i-1][j];
                if(coins[i]<=j) take = dp[i][j-coins[i]];
                dp[i][j] = nottake + take;
            }
        }
        return dp[n-1][amount];
    }
};