#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool helper(int i,int j,int k,string s1, string s2, string s3,vector<vector<int>> &dp){
        if(i==0 && j==0 && k==0) return true;

        if(dp[i][j] != -1) return dp[i][j];

        bool a=false,b=false;
        if(i>0 && k>0 && s1[i-1]==s3[k-1]){
            a=helper(i-1,j,k-1,s1,s2,s3,dp);
        }
        if(j>0 && k>0 && s2[j-1]==s3[k-1]){
            b=helper(i,j-1,k-1,s1,s2,s3,dp);
        }
        return dp[i][j] = a || b;
    }
    bool isInterleave(string s1, string s2, string s3) {
        // return helper(m,n,o,s1,s2,s3,dp);

        int m = s1.size(),n=s2.size(),o=s3.size();
        if(m+n != o) return false;
        vector<vector<bool>> dp(m+1,vector<bool>(n+1,false));
        dp[0][0]=true;
        for(int i=1;i<=m;i++) dp[i][0] = dp[i-1][0] && s1[i-1]==s3[i-1];
        for(int i=1;i<=n;i++) dp[0][i] = dp[0][i-1] && s2[i-1]==s3[i-1];

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(dp[i-1][j] && s1[i-1] == s3[i+j-1]) dp[i][j]=true;
                else if(dp[i][j-1] && s2[j-1] == s3[i+j-1]) dp[i][j]=true;

            }
        }
        return dp[m][n];
    }
};