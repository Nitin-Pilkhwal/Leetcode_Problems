#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size=nums.size();

        vector<int>answer;
        int right[size],i;
        right[size-1]=1;
        for(i=size-2;i>=0;i--){
            right[i]=right[i+1]*nums[i+1];
        }
        int r=1;
        for(i=0;i<size;i++){
            answer.push_back(r*right[i]);
            r=r*nums[i];
        }
        return answer;
    }
};