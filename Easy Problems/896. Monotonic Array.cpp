#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool asc=true,desc=true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) asc=false;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]) desc=false;
        }
        return asc || desc;
    }
};