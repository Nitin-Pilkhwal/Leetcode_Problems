#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rev(vector<int> & v){
        int n=v.size();
        int i=0,j=n-1;
        while(i<=j){
            int t=v[i];
            v[i]= v[j];
            v[j] = t;
            i++;
            j--;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        // vector<vector<int>> ans(n,vector<int>(n,0));
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         ans[j][n-i-1] = matrix[i][j];
        //     }
        // }
        // matrix=ans;

        // transpose the matrix
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            rev(matrix[i]);
        }
    }
};