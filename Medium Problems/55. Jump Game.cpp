#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach=0;
        for(int i=0;i<=reach;i++){
            reach=max(reach,i+nums[i]);
            if(reach>=nums.size()-1) return true;
        }
    return false;
    }
};