#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int helper(string word1, string word2,int i,int j,vector<vector<int>> &dp){
      if(i<0 || j<0) return max(i,j)+1;
      if(word1[i]==word2[j]) {
        return dp[i][j]=helper(word1,word2,i-1,j-1,dp);
      }
      if(dp[i][j]!=-1) return dp[i][j];
      int del = 1 + helper(word1,word2,i-1,j,dp);
      int ins = 1 + helper(word1,word2,i,j-1,dp);
      int rep = 1 + helper(word1,word2,i-1,j-1,dp);
      return dp[i][j]=min(del,min(ins,rep));
    }
    // -------------------------- Tabulation -------------------------------//
    int minDistance(string word1, string word2) {
        int s1=word1.size(),s2=word2.size();
        vector<vector<int>> dp(s1+1,vector<int>(s2+1,0));
        for(int i=0;i<=s1;i++) dp[i][0] = i;
        for(int j=0;j<=s2;j++) dp[0][j] = j;

        for(int i=1;i<=s1;i++){
          for(int j=1;j<=s2;j++){
            if(word1[i-1]==word2[j-1]) dp[i][j] = dp[i-1][j-1];
            else{
            int del = dp[i-1][j];
            int ins = dp[i][j-1];
            int rep = dp[i-1][j-1];
            dp[i][j]= 1 + min(del,min(ins,rep));}
          }
        }
        return dp[s1][s2];
    }
    // -------------------------- Tabulation -------------------------------//
};