#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0,dup=0,semicount=0,cur=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(cur==nums[i] && semicount<=1){
                cur=nums[i];
                nums[count++]=nums[i];
                semicount++;
            }
            if(cur!=nums[i]){
                cur=nums[i];
                nums[count++]=nums[i];
                semicount=0;
            }
            else{
                semicount++;
            }
        }
        return count;
    }
};