#include <iostream>
#include <unordered_map>
#include <map>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <limits.h>
using namespace std;

class Solution {
public:
    int minimum(int a,int b){
        if(a<=b) return a;
        return b;
    }
    int maximum(int a,int b){
        if(a>=b) return a;
        return b;
    }
    int maximumGap(vector<int>& nums) {
        // if(nums.size()<2) return 0;
        // sort(nums.begin(),nums.end());
        // int gap=nums[1]- nums[0];
        // for(int i=2;i<nums.size();i++){
        //     if(gap<nums[i]-nums[i-1]) gap=nums[i]-nums[i-1];
        // }
        // return gap;


        if(nums.size()<2) return 0;
        int max=nums[0],min=nums[0];

        for(int i=1;i<nums.size();i++){
            if(min>nums[i]) min=nums[i];
            if(max<nums[i]) max=nums[i];
        }

        int maxgap=ceil((max-min)/((nums.size()-1)*1.0));
        if(maxgap==0) return 0;

        vector<int> m(nums.size(),INT_MAX);
        vector<int> n(nums.size(),INT_MIN);

        for(int i=0;i<nums.size();i++){
            int ind = (nums[i]-min)/maxgap;
            m[ind]=minimum(m[ind],nums[i]);
            n[ind]=maximum(n[ind],nums[i]);
        }
        int gap=0;

        for(int i=0;i<m.size();i++){
            if(m[i]==INT_MAX) continue;
            gap=maximum(gap,m[i]-min);
            min=n[i];
        }
        return gap;
    }
};