#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int prev2=0;
        int prev1=nums[0];
        for(int i=1;i<nums.size();i++){
            int take = nums[i];
            if(i>1) take += prev2;
            int ntake = 0 + prev1;
            int curr = max(ntake,take);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};