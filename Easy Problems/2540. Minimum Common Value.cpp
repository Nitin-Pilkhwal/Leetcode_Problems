#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int e2=nums2.size();
        for(int i=0;i<e2;i++){
            int target=nums2[i];
            int s1=0,e1=nums1.size()-1;
            while(s1<=e1){
                int m1=s1+(e1-s1)/2;
                if(nums1[m1]==target) return target;
                else if (nums1[m1]<target){s1=m1+1;}
                else if (nums1[m1]>target){e1=m1-1;}
            }
        }
        return -1;
    }
};