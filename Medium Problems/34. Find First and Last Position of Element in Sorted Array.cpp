#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int upper(vector<int>& nums, int t){
        int s=0,e=nums.size()-1,res=-1,m;
        while(s<=e){
            m=(s+e)/2;
            if(nums[m]==t)
                res=m,s=m+1;
            else if(nums[m]<t)
                s=m+1;
            else
                e=m-1;
        }
        return res;
    }
    int lower(vector<int>& nums, int t){
        int s=0,e=nums.size()-1,res=-1,m;
        while(s<=e){
            m=(s+e)/2;
            if(nums[m]==t)
                res=m,e=m-1;
            else if(nums[m]<t)
                s=m+1;
            else
                e=m-1;
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int t) {
        int l=lower(nums,t);
        int r=upper(nums,t);
        return {l,r};
    }
};