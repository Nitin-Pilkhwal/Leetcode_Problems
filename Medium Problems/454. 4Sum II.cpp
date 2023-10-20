#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n=nums1.size();
        int count=0;
        map<int,int> mp;
        for(int l=0;l<n;l++){
            for(int k=0;k<n;k++){
                    mp[nums4[l]+nums3[k]]++;
                }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                    long long sum=nums1[i];
                    sum+=nums2[j];        
                    if( (mp.find(-sum) != mp.end())) {
                        count+=mp[-sum];
                    }
            }
        }
        return count;
    }
};