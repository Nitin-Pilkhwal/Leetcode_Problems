#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=INT_MIN,n=nums.size();
        map<int,int> a;
        n=ceil(n/2);
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
            if(a[nums[i]]>n && nums[i]>ans){
                ans=nums[i];
            }
        }
        return ans;
    }
};