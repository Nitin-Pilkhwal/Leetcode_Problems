#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums){
        int mxs=nums[0],cur=0;
        for(int i=0;i<nums.size();i++){
            if(cur<0)
                cur=0;
            cur+=nums[i];
            mxs=max(mxs,cur);
        }
        return mxs;
    }
};