#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1) return;
        int i=0;
        int swapped_index=-1;
        for(i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                swapped_index=i;
                break;
            }
        }
        if(swapped_index==-1)
            reverse(nums.begin(),nums.end());
        else{
            // int m=swapped_index-1;
            int j;
            for(j=nums.size()-1;j>swapped_index;j--){
                if(nums[j]>nums[swapped_index]){
                    break;
                }
            }
            swap(nums[swapped_index],nums[j]);
            reverse(nums.begin()+swapped_index+1,nums.end());
        }
    }
};