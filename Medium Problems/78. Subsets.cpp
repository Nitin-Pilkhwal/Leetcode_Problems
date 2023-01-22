#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
private:
void help(vector<int>& nums,vector <int>& x,vector<vector<int>>& ans,int i){
    if(i>=nums.size()){
        ans.push_back(x);
        return ;
    }
    x.push_back(nums[i]);
    help(nums,x,ans,i+1);
    x.pop_back();
    help(nums,x,ans,i+1);
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> ans;
        help(nums,ans,answer,0);
        return answer;
    }
};