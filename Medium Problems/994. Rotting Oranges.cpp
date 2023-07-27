#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int fresh=0;
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    grid[i][j]=3; 
                }
                else {
                    if(grid[i][j]==1) fresh++;
                }
            }
        }
        int minitime = 0;
        int cnt=0;
        int rows[4] = {-1,0,1,0};
        int cols[4] = {0,1,0,-1};
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            q.pop();
            minitime = max(minitime,t);
            for(int i=0;i<4;i++){
                int nrow = row + rows[i];
                int ncol = col + cols[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==1 ){
                    q.push({{nrow,ncol},t+1});
                    grid[nrow][ncol]=3;
                    cnt++;
                }
            }
        }
        if(fresh!=cnt) return -1;
        return minitime;
    }
};