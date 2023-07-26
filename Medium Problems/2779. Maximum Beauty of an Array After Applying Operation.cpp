#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int l = 0,r = 0;
        int n=nums.size();
        int mx=0;
        sort(nums.begin(),nums.end());
        while(r<n){
            if(nums[r] - nums[l] <=2*k){
                mx = max(mx,r-l+1);
                r++;
            }
            else {
                l++;
            }
        }
        return mx;
    }
};