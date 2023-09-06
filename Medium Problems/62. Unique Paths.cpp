#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // ------------------ Memoization -------------------------------------//
    // int fun(int m,int n,vector<vector<int>> &dp){
    //     if(m==0 && n==0) return 1;
    //     if(m<0 || n<0) return 0;
    //     if(dp[m][n] != -1) return dp[m][n];
    //     int up = 0,right = 0;
    //     if(m>0) up = fun(m-1,n,dp);
    //     if(n>0) right = fun(m,n-1,dp);
    //     return dp[m][n] = up + right;
    // }
    //     if(m==1 && n==1) return 1;
    //     vector<vector<int>> dp(m,vector<int>(n,-1));
    //     fun(m-1,n-1,dp);
    //     return dp[m-1][n-1];
    // }
    // ------------------ Memoization -------------------------------------//
    // ------------------ Tabulation --------------------------------------//
    // int uniquePaths(int m, int n) {
    //     vector<vector<int>> dp(m,vector<int>(n,-1));
    //     dp[0][0]=1;
    //     for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             if(i==0 && j==0) continue;
    //             int up = 0,right = 0;
    //             if(i>0) up = dp[i-1][j];
    //             if(j>0) right = dp[i][j-1];
    //             dp[i][j] = up + right;
    //         }
    //     }
    // return dp[m-1][n-1];
    // }
    // ------------------ Tabulation --------------------------------------//
    // ------------------ Tabulation Space Optimization--------------------------------------//
    int uniquePaths(int m, int n) {
        vector<int> prev(n,0);
        for(int i=0;i<m;i++){
            vector<int> temp(n,0);
            for(int j=0;j<n;j++){
                if(i==0 && j==0) temp[j]=1;
                else if(j>0) temp[j] = prev[j] + temp[j-1];
                else temp[j] = prev[j];
            }
            prev = temp;
        }
        return prev[n-1];
    }
    // ------------------ Tabulation Space Optimization--------------------------------------//
};