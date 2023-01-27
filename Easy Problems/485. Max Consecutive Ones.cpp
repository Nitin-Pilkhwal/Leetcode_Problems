#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cur=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) cur++;
            else{
                ans=max(ans,cur);
                cur=0;
            }
        }
                ans=max(ans,cur);
        return ans;
    }
};