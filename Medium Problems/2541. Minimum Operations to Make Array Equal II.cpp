#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        
        long long int dec=0,inc=0;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            if(nums1[i]>nums2[i]){
                if(k==0) return -1;
                else if((nums1[i]-nums2[i])%k!=0) {return -1;}
                else {dec=dec+(nums1[i]-nums2[i])/k;}
                }
            else if(nums1[i]<nums2[i]){ 
                if(k==0) return -1;
                else if((nums2[i]-nums1[i])%k!=0) {return -1;}
                else {
                    inc=inc+(nums2[i]-nums1[i])/k;
                }
            }
        }
        return (inc!=dec)?-1:inc;
    }
};