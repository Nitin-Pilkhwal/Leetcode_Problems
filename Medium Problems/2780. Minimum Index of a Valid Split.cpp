#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        if(nums.size()==1) return -1;
        if(nums.size()==2) return 0;
        int n=nums.size();
        unordered_map<int,int> left,right;
        for(int i=0;i<n;i++){
            left[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            int a = ++right[nums[i]];
            int b = --left[nums[i]];
            if(a*2 > i+1 && b*2 > n-i-1) return i;
        }
        return -1;
    }
};