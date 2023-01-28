#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans(n,-1);
        long sum=0;
        int i,j,c;
        if(nums.size()<(2*k+1))
        return ans;
        for(i=0;i<=2*k;i++){
            sum+=nums[i];
        }
        ans[k]=sum/(2*k+1);
        for(i=0,j=2*k+1,c=k+1;j<n;i++,j++,c++){
            sum=sum-nums[i]+nums[j];
            ans[c]=sum/(2*k+1);
        }
        return ans;
    }
};