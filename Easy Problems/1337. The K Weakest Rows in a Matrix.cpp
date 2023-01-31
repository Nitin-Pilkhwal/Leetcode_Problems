#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int bsearch(vector<int>& v){
        int left = 0, right=v.size()-1, mid;
        while(left<=right){
            mid = left + (right - left)/2;
            
            if(v[mid]==1){
                left = mid + 1;
            }
            else{
                right = mid-1;
            }
        }
        return left;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        vector<pair<int,int>> vp;
        int count = 0;
        
        for(int i=0; i<n; ++i){
            count = bsearch(mat[i]);
            vp.push_back({count, i});
        }
        
        sort(vp.begin(), vp.end());
        vector<int> ans;
        for(int i=0; i<k; ++i) ans.push_back(vp[i].second);
        return ans;
    }
};