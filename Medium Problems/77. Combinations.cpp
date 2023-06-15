#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    void helper(int ind,int n,set<vector<int>>&ans,vector<int>&v,int k){
        if(v.size()==k){
            ans.insert(v);
            return ;
        }
        // if(ind==n) return ;
        for(int i=ind;i<=n;i++){
            v.push_back(i);
            helper(i+1,n,ans,v,k);
            v.pop_back();
            // helper(i+1,n,ans,v,k);
        }
    }
    vector<vector<int>> combine(int n, int k) {
        
        set<vector<int>> ans;
        vector<int> v;

        helper(1,n,ans,v,k);
        vector<vector<int>> answer(ans.begin(),ans.end());
        return answer;
    }
};