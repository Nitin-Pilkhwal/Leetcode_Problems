#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    bool is_sorted(vector<int> nums){
        int n=nums.size();
        for(int i=1;i<n;i++) if(nums[i]<nums[i-1]) return false;
        return true;
    }
    int minimumRightShifts(vector<int>& nums) {
        int idx=0;
        vector<int> v;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]) idx=i;
        }
        int n=nums.size();
        for(int i=idx;i<nums.size();i++) v.push_back(nums[i]);
        for(int i=0;i<idx;i++) v.push_back(nums[i]);
        if(is_sorted(v)) return (n-idx)%n;
        return -1;
    }
};