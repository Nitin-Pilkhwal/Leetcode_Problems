#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void fun(vector<vector<int>>&ans,vector<int>&t,int ind,int sum,int k){
        if(t.size()==k ){
            if(sum==0) ans.push_back(t);
            return;
        }
        if(ind > 9) return;
        if(ind <= sum) {
            t.push_back(ind);
            fun(ans,t,ind+1,sum-ind,k);
            t.pop_back();
        }
        fun(ans,t,ind+1,sum,k);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> t;
        fun(ans,t,1,n,k);
        return ans;
    }
};