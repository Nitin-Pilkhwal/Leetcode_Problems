#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        int n = nums.size();
        long long currsum=0,ans=0;
        for(int i=n-1;i>=0;i--){
            if(nums[i]>currsum) currsum=0;
            currsum+=nums[i];
            ans = max(ans,currsum);
        }
        return ans;
    }
};