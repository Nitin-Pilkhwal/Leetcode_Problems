#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size(),n=mat[0].size();
        if(r*c != m*n)
            return mat;
        
        vector<vector<int>> alpha(r,vector<int>(c));
        int row=0,col=0;
        int i=0,j=0;
        for(i=0;i<r;){
            alpha[i][j]=mat[row][col++];
            if(col==n){
                col=0;
                row+=1;
            }
            j++;
            if(j==c){
                j=0;
                i++;
            }
        }
        return alpha;
    }
};