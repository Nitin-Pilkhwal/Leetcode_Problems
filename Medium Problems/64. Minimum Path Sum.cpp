#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    //-------------------- Memoization ---------------------------------//
    // int helper(int i,int j,vector<vector<int>> grid,vector<vector<int>> & dp){
    //     if(i==0 && j==0) return grid[0][0];
    //     if(i<0 || j<0) return INT_MAX;
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int up = INT_MAX,left = INT_MAX;
    //     if(i>0) up = grid[i][j] + helper(i-1,j,grid,dp);
    //     if(j>0) left = grid[i][j] + helper(i,j-1,grid,dp);;
    //     return dp[i][j] = min(up,left);
    // }
    // int minPathSum(vector<vector<int>>& grid) {
    //     int n=grid.size(),m=grid[0].size();
    //     if(n==1 && m==1) return grid[0][0];
    //     vector<vector<int>> dp(n,vector<int>(m,-1));
    //     helper(n-1,m-1,grid,dp);
    //     return dp[n-1][m-1];
    // }
    //-------------------- Memoization ---------------------------------//
    //-------------------- Tabulation ---------------------------------//
    // int minPathSum(vector<vector<int>>& grid) {
    //     int n=grid.size(),m=grid[0].size();
    //     if(n==1 && m==1) return grid[0][0];
    //     vector<vector<int>> dp(n,vector<int>(m,-1));
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if(i==0 && j==0) dp[i][j] = grid[i][j];
    //             else{
    //                 int down = INT_MAX,right = INT_MAX;
    //                 if(i>0) down = grid[i][j] + dp[i-1][j];
    //                 if(j>0) right = grid[i][j] + dp[i][j-1];
    //                 dp[i][j] = min(down,right);
    //             }
    //         }
    //     }
    // return dp[n-1][m-1];
    // }
    //-------------------- Tabulation ---------------------------------//
    //-------------------- Tabulation Space optimization ---------------------------------//
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        for(int i=1;i<n;i++) grid[i][0] += grid[i-1][0];
        for(int i=1;i<m;i++) grid[0][i] += grid[0][i-1];
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                grid[i][j] += min(grid[i-1][j],grid[i][j-1]);
            }
        }
        return grid[n-1][m-1];
    }
    //-------------------- Tabulation Space optimization ---------------------------------//
};