#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    void fun(int ind,vector<vector<int>>& ans,vector<int>& can,int target,vector<int> v){
        if(ind==can.size()){
            if(target==0){
                ans.push_back(v);
            }
            return ;
        }
        if(can[ind]<=target){
            v.push_back(can[ind]);
            fun(ind,ans,can,target-can[ind],v);
            v.pop_back();
        }
        fun(ind+1,ans,can,target,v);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        fun(0,ans,candidates,target,v);
        return ans;
    }
};