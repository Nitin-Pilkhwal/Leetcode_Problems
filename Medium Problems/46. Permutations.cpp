#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    // void permutation(vector<int>&nums,vector<vector<int>>&ans,vector<int>&v,vector<bool>&feq){
    //     if(v.size()==nums.size()){
    //         ans.push_back(v);
    //         return ;
    //     }
    //     for(int i=0;i<nums.size();i++){
    //         if(!feq[i]){
    //             feq[i]=true;
    //             v.push_back(nums[i]);
    //             permutation(nums,ans,v,feq);
    //             v.pop_back();
    //             feq[i]=false;
    //         }
    //     }
    // }

    void permutation(int ind,vector<int>&nums,vector<vector<int>>&ans){
        if(ind==nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            permutation(ind+1,nums,ans);
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        // vector<int> v;
        // vector<bool> feq(nums.size(),false);
        // permutation(nums,ans,v,feq);
        permutation(0,nums,ans);
        

        return ans;
    }
};