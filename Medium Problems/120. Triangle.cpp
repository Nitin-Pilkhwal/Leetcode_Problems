#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    //------------------------------- Memoization ---------------------------------//
    // int helper(vector<vector<int>> nums,int i,int j,int n,vector<vector<int>>& dp){
    //     if(i==n-1) return nums[i][j];
    //     if(j>i) return INT_MAX;
    //     if(dp[i][j] != -1e5) return dp[i][j];
    //     int down = INT_MAX,rdown = INT_MAX;
    //     down= nums[i][j] + helper(nums,i+1,j,n,dp);
    //     rdown = nums[i][j] + helper(nums,i+1,j+1,n,dp);
    //     return dp[i][j] = min(down,rdown);
    // }
    // int minimumTotal(vector<vector<int>>& triangle) {
    //     int n=triangle.size();
    //     vector<vector<int>> dp(n,vector<int>(n,-1e5));
    //     return helper(triangle,0,0,n,dp);
    // }
    //------------------------------- Memoization ---------------------------------//
    //------------------------------- Tabulation ---------------------------------//
    // int minimumTotal(vector<vector<int>>& triangle) {
    //     int n=triangle.size();
    //     vector<vector<int>> dp(n,vector<int>(n,-1e5));
    //     for(int i=0;i<n;i++) dp[n-1][i] = triangle[n-1][i];
    //     for(int i=n-2;i>=0;i--){
    //         for(int j=0;j<i+1;j++){
    //             int down,rdown;
    //             down = triangle[i][j] + dp[i+1][j];
    //             rdown = triangle[i][j] + dp[i+1][j+1];
    //             dp[i][j] = min(down,rdown);
    //         }
    //     }
    //     return dp[0][0];
    // }
    //------------------------------- Tabulation ---------------------------------//
    //------------------------------- Tabulation Space Optimization ---------------------------------//
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int> pre(n,0);
        for(int i=0;i<n;i++) pre[i] =  triangle[n-1][i];
            vector<int> curr(n,0);
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<i+1;j++){
                int down,rdown;
                down = triangle[i][j] + pre[j];
                rdown = triangle[i][j] + pre[j+1];
                curr[j] = min(down,rdown);
            }
            pre = curr;
        }
        return pre[0];
    }
    //------------------------------- Tabulation Space Optimization ---------------------------------//
};