#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // set<vector<int>> st;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         set<long long> hashset;
        //         for(int k=j+1;k<n;k++){
        //             long sum=nums[i]+nums[j];
        //             sum+=nums[k];
        //             // sum+=nums[l];
        //             long long forth = target - sum;
        //             if(hashset.find(forth) != hashset.end()){
        //                 vector<int> temp = {nums[i],nums[j],nums[k],(int)forth};
        //                 sort(temp.begin(),temp.end());
        //                 st.insert(temp);
        //             }
        //             hashset.insert(nums[k]);
        //         }
        //     }
        // }
        // vector<vector<int>> ans(st.begin(),st.end());
        // return ans;
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j!=i+1 && nums[j] == nums[j-1]) continue;
                int l=j+1;
                int r=n-1;
                while(l<r){
                    long long sum = nums[i];
                    sum+= nums[j];
                    sum+= nums[l];
                    sum+= nums[r];
                    if(sum == target) {
                        vector<int> temp = {nums[i],nums[j],nums[l],nums[r]};
                        ans.push_back(temp);
                        r--;l++;
                        while(l<r && nums[l]==nums[l-1]) l++;
                        while(l<r && nums[r]==nums[r+1]) r--;
                    }
                    else if(sum>target){
                        r--;
                    }
                    else{
                        l++;
                    }
                }
            }
        }
        return ans;
    }
};