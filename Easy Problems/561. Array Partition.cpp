#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int i,sum=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i+=2){
            sum+=(nums[i]);
        }
        return sum;
    }
};