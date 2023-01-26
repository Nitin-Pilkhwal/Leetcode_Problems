#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1])
            {
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};