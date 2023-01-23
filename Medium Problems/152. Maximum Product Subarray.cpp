#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mxs=nums[0],c=1,d=1;
        int n=nums.size();
        if(n==1)
            return nums[0];
        for(int i=0;i<n;i++){
            c*=nums[i];
            d*=nums[n-i-1];
            mxs=max(mxs,max(d,c));
            if(c==0) c=1;
            if(d==0) d=1;
        }
        return mxs;
    }
};