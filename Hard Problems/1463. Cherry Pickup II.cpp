#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    //----------------------------------- Memoization ---------------------------------------//
    int helper(int i,int j1,int j2,int r,int c,vector<vector<int>>& grid,vector<vector<vector<int>>> &dp){
        if(i>=r || j1>=c || j2>=c || j1<0 || j2<0) return -1e7;
        if(i==r-1){
            if(j1==j2) return grid[i][j1];
            else return grid[i][j1] + grid[i][j2];
        }
        if(dp[i][j1][j2] != -1) return dp[i][j1][j2];
        int maxi = -1e7;
        for(int a=-1;a<=1;a++){
            for(int b=-1;b<=1;b++){
                int val=0;
                if(j1==j2) val=grid[i][j1];
                else val=grid[i][j1] + grid[i][j2];
                val += helper(i+1,j1+a,j2+b,r,c,grid,dp);
                maxi=max(val,maxi);
            }
        }
        return dp[i][j1][j2]=maxi;
    }
    //----------------------------------- Memoization ---------------------------------------//
    //----------------------------------- Tabulation ---------------------------------------//
    int cherryPickup(vector<vector<int>>& grid) {
        int r=grid.size(),c=grid[0].size();

        // int dp[r][c][c];
        vector<vector<vector<int>>> dp(r,vector<vector<int>>(c,vector<int>(c,-1)));

        // return helper(0,0,c-1,r,c,grid,dp);

        for(int j1=0;j1<c;j1++){
            for(int j2=0;j2<c;j2++){
                if(j1==j2) dp[r-1][j1][j2] = grid[r-1][j1];
                else dp[r-1][j1][j2] = grid[r-1][j1] + grid[r-1][j2];
            }
        }
        int maxi=-1e7;
        for(int i=r-2;i>=0;i--){
            int val=0;
            for(int j1=0;j1<c;j1++){
                for(int j2=0;j2<c;j2++){
                    int maxi = -1e7;
                    for(int a=-1;a<=1;a++){
                        for(int b=-1;b<=1;b++){
                            int val=0;
                            if(j1==j2) val=grid[i][j1];
                            else val=grid[i][j1] + grid[i][j2];
                            if(j1+a >=0 && j1+a<c && j2+b >=0 && j2+b<c)
                            val += dp[i+1][j1+a][j2+b];
                            else val += -1e8;
                            maxi=max(val,maxi);
                        }
                    }
                    dp[i][j1][j2] = maxi;
                }
            }
        }
        return dp[0][0][c-1];
    }
    //----------------------------------- Tabulation ---------------------------------------//
};