#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool help(vector<vector<char>>& board,int i,int j,char ch){
        int x=0,y=0;
        for(x=0;x<9;x++)
            if(board[x][j]==ch && x!=i) return false;
        for(x=0;x<9;x++)
            if(board[i][x]==ch && x!=j) return false;
        int a=3*(i/3),b=3*(j/3);
        for(x=a;x<a+3;x++){
            for(y=b;y<b+3;y++){
                if(x!=i && y!=j && board[x][y]==ch)
                    return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.')
                    if(!help(board,i,j,board[i][j])) return false;
            }
        }
        return true;
    }
};