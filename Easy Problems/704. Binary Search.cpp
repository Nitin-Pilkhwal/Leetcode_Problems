#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int t) {
        int s=0;
        int e=nums.size()-1;
        int m;
        while(s<=e){
            m=(s+e)/2;
            if(nums[m]==t)
                return m;
            else if(nums[m]>t)
                e=m-1;
            else
                s=m+1;
        }
        return -1;
    }
};