#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    void helper(vector<vector <int>> v,vector<vector <int>>& matrix){
        int i,j;
        for(i=0;i<v.size();i++){
            for(j=0;j<matrix.size();j++){
                matrix[j][v[i][1]]=0;
            }
            for(j=0;j<matrix[0].size();j++){
                matrix[v[i][0]][j]=0;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<vector <int>> v;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0)
                    v.push_back({i,j});
            }
        }
        helper(v,matrix);
    }
};