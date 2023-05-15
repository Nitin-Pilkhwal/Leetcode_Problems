#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int f=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1] ) f++;
        }
        if(nums[nums.size()-1]>nums[0]) f++;
        return f <=1;
    }
};