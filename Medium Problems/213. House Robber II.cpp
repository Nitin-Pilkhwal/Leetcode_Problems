#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int rob1(vector<int>& nums) {
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
    int rob(vector<int>& nums) {
        vector<int> p,q;
        int n=nums.size();
        if(n==1) return nums[0];
        for(int i=0;i<n;i++){
            if(i!=0) p.push_back(nums[i]);
            if(i!=n-1) q.push_back(nums[i]);
        }
        return max(rob1(p),rob1(q));
    }
};