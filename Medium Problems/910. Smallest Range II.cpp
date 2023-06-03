#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left=nums[0];
        int right=nums[nums.size()-1];
        int score=right-left;
        for(int i=1;i<nums.size();i++){
            int ma = max(nums[i-1]+k,right-k);
            int mi = min(nums[i]-k,left+k);
            score=min(score,ma-mi);
        }
        return score;
    }
};