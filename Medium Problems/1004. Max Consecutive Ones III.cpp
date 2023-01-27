#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count=0,r=0,l=0,n=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]==0) n++;
            while(n>k && l<nums.size()){
                if(nums[l]==0) n--;
                l++;
            }
            count=max(count,r-l+1);
        }
        return count;
    }
};