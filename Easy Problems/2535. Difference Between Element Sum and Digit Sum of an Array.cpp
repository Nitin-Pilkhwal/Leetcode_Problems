#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int s=0;
        int d=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            while(nums[i]>0)
            {
                int x = nums[i]%10;
                d += x;
                nums[i] /=10;
            }
        }
        return s-d;
    }
};