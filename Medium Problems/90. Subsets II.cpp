#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    void helper(int ind,vector<int>& nums,vector<vector<int>>& ans,vector<int>& ds){
            ans.push_back(ds);
        for(int i=ind;i<nums.size();i++){
            if(ind!=i && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            helper(i+1,nums,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        helper(0,nums,ans,ds);
        return ans;
    }
};