#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0) return 0;
        int count=0,left=0,right=0,cur=1;
        for(right=0;right<nums.size();right++){
            cur*=nums[right];
            while(left<nums.size() && cur>=k){
                cur/=nums[left];
                left++;
            }
            if(cur<k){
                count+=right-left+1;
            }
        }
        return count;
    }
};