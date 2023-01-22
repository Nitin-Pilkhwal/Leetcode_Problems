#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        if(matrix.size()==0) return false;
        int m=matrix.size(),n=matrix[0].size();
        int s=0,e=m*n-1;
        while(s<=e){
            int m=(s+e)/2;
            int i=m/n,j=m%n;
            if(matrix[i][j]==t)
                return true;
            else if(matrix[i][j]<t)
                s=m+1;
            else
                e=m-1;
        }
        return false;
    }
};