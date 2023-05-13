#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix[0].size();
        int n=matrix.size();

        vector<int> ans;

        int t=0,l=0,i;
        int b=n-1,r=m-1;

        while(l<=r && t<=b){
            for(i=l;i<=r;i++)
                ans.push_back(matrix[t][i]);
            t++;
            for(i=t;i<=b;i++)
                ans.push_back(matrix[i][r]);
            r--;
            if(t<=b){
                for(i=r;i>=l;i--)
                    ans.push_back(matrix[b][i]);
                b--;
            }
            if(l<=r){
                for(i=b;i>=t;i--)
                    ans.push_back(matrix[i][l]);
                    l++;
            }
        }
        
        return ans;
    }
};