#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool issafe(int r,int c,vector<string>& board,int n){
        int row=r;
        int col=c;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--;col--;
        }
        row=r;
        col=c;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return false;
            row++;col--;
        }
        row=r;
        col=c;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        return true;
    }
    void helper(int& ans,int col,vector<string>& board,int n){
        if(col==n){
            ans++;
            return ;
        }

        for(int i=0;i<n;i++){
            if(issafe(i,col,board,n)){
                board[i][col]='Q';
                helper(ans,col+1,board,n);
                board[i][col]='.';
            }
        }
    }
    int totalNQueens(int n) {
        int ans=0;
        vector<string> board;
        string s(n,'.');
        for(int i=0;i<n;i++)
            board.push_back(s);
        helper(ans,0,board,n);
        return ans;
    }
};