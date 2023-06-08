#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        // vector<vector<int>> v(n,vector<int>(n, 0));
        // long long ans=0;
        // int row=0,col=0;
        // for(int i=0;i<queries.size();i++){
        //     if(row==0 || col==0){
        //         ans+=n*queries[i][2];
        //     }
        //     else break;
        // }
        // for(int i=0;i<queries.size();i++){
        //     if(queries[i][0]==0){
        //         for(int j=0;j<n;j++){
        //             int ind=queries[i][1];
        //             ans+=queries[i][2]-v[ind][j];
        //             v[ind][j]=queries[i][2];
        //         }
        //     }
        //     else{
        //         for(int j=0;j<n;j++){
        //             int ind=queries[i][1];
        //             ans+=queries[i][2]-v[j][ind];
        //             v[j][ind]=queries[i][2];
        //         }
        //     }
        // }
        // // return 
        // return ans;
        unordered_map<int,bool> row;
        unordered_map<int,bool> col;
        int rows=n;
        int cols=n;
        long long ans=0;

        for(int i=queries.size()-1;i>=0;i--){
            int ind = queries[i][1];
            int val = queries[i][2];
            int type = queries[i][0];

            if(type==0){
                if(row.find(ind)==row.end()){
                    ans+=val*cols;
                    row[ind]=true;
                    rows--;
                }
            }
            else{
                if(col.find(ind)==col.end()){
                    ans+=val*rows;
                    col[ind]=true;
                    cols--;
                }
            }
        }

        return ans;
    }
};