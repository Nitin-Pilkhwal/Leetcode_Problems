#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void dfs(int row,int col,vector<vector<char>>& board){
        board[row][col]='@';
        int n = board[0].size();
        int m = board.size();
        int rows[4] = {-1,0,1,0};
        int cols[4] = {0,1,0,-1};
        for(int i=0;i<4;i++){
            int nr = row + rows[i];
            int nc = col + cols[i];
            if(nr>=0 && nr<m && nc>=0 && nc<n && board[nr][nc]=='O')
                dfs(nr,nc,board);
        }
    }
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();

        
        for(int i=0;i<m;i++){
            if(board[i][0]=='O' ){
                dfs(i,0,board);
            }
            if(board[i][n-1]=='O' ){
                dfs(i,n-1,board);
            }
        }
        for(int i=0;i<n;i++){
            if(board[0][i]=='O' ){
                dfs(0,i,board);
            }
            if(board[m-1][i]=='O'){
                dfs(m-1,i,board);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O') board[i][j]='X';
                if(board[i][j]=='@') board[i][j]='O';
            }
        }
    }
};