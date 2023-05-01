#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans=0 , n=grid[0].size() , m=grid.size();
        for(int i=0;i<grid.size();i++){
            sort(grid[i].begin(),grid[i].end());
        }
        for(int i=0;i<n;i++){
            int q=INT_MIN;
            for(int j=0;j<m;j++){
                q = max(q,grid[j][i]);
            }
            ans+=q;
        }
        return ans;
    }
};