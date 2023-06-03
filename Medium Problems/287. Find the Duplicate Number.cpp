#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int idx=abs(nums[i]);
            if(nums[idx]<0) return idx;
            nums[idx]=-nums[idx];
        }
        return 0;
    }
};