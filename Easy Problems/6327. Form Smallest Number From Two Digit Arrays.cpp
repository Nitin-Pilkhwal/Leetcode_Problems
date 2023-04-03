#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int common=INT_MAX,min1=INT_MAX,min2=INT_MAX;
        for(int i=0;i<nums1.size();i++){
            if(min1>nums1[i]) min1=nums1[i];
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j] && common>nums1[i]) common=nums1[i];
                if(min2>nums2[j]) min2=nums2[j];
            }
        }
        if(common!=INT_MAX) return common;
        return (min1*10+min2>min2*10+min1)?min2*10+min1:min1*10+min2;
    }
};