#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int bfs(int row,int col, vector<vector<int>>& grid){
        int m=grid.size();
        int n=grid[0].size();
        grid[row][col]=0;
        
        int rows[4] = {-1,0,1,0};
        int cols[4] = {0,1,0,-1};
        int count=1;
        for(int i=0;i<4;i++){
            int nr = rows[i] + row;
            int nc = cols[i] + col;
            if(nr>=0 && nc>=0 && nr<m && nc<n && grid[nr][nc]==1){
                bfs(nr,nc,grid);
            }
        }
        return count;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int lands = 0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            if(grid[i][0]==1) bfs(i,0,grid);
            
            if(grid[i][n-1]==1) bfs(i,n-1,grid);
            
        }
        for(int i=0;i<n;i++){
            if(grid[0][i]==1) bfs(0,i,grid);
            
            if(grid[m-1][i]==1) bfs(m-1,i,grid);
            
        }

        for(int i=1;i<m-1;i++){
            for(int j=1;j<n-1;j++){
                if(grid[i][j]==1) lands++;
            }
        }

        return lands;
    }
};