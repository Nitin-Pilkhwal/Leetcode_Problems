#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int j=0,i=0;
        // for(i=0;i<nums1.size();i++){
        //     for(j=0;j<nums2.size();j++){
        //         if(nums1[i]==nums2[j] && find(ans.begin(),ans.end(),nums1[i])==ans.end())
        //             ans.push_back(nums1[i]);
        //     }
        // }

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]) i++;
            else if(nums1[i]>nums2[j]) j++;
            else {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            while(i>0 && i<nums1.size() && nums1[i]==nums1[i-1]) i++;
            while(j>0 && j<nums2.size() && nums2[j]==nums2[j-1]) j++;
        }
        return ans;
    }
};