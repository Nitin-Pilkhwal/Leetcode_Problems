#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    void fun(int ind,vector<int>& can, int target,vector<vector<int>>& ans,vector<int>& t){
        if(target==0){
            ans.push_back(t);
            return;
        }
        for(int i=ind;i<can.size();i++){
            if(i>ind && can[i]==can[i-1]) continue;
            if(can[i]>target) break;
            t.push_back(can[i]);
            fun(i+1,can,target-can[i],ans,t);
            t.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& can, int target) {
        sort(can.begin(),can.end());
        vector<vector<int>> ans;
        vector<int> t;

        fun(0,can,target,ans,t);

        return ans;
    }
};