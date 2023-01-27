#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int specialArray(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        while(s<=e){
            int m=(s+e)/2,count=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=(m+1)) count++;
            }
            if((m+1)==count) return m+1;
            else if((m+1)>count) e=m-1;
            else s=m+1;
            }
        return -1;
        }
};