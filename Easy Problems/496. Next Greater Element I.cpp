#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int > ans;
        vector<int> :: iterator it1,it2;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                int found=0;
                if(nums1[i]==nums2[j]){
                    if( j+1<nums2.size()){
                        for(j=j+1;j<nums2.size();j++){
                            if(nums1[i]<nums2[j]){
                                found=1;
                                ans.push_back(nums2[j]);
                                break;
                            }
                        }
                    }
                    if(!found) ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};