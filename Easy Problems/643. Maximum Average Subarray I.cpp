#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int ans=0;
        double sum;
        for(int i=0;i<k;i++){
             ans+=nums[i];
        }
        sum=ans;
        for(int i=k;i<nums.size();i++){
            ans-=nums[i-k];
            ans+=nums[i];
            if(ans>sum) sum=ans;
        }
        return (sum/k);
    }
};


