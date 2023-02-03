#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0],b=nums[nums.size()-1];
        while(a!=b){
            (a>b)?a-=b:b-=a;
        }
        return a;
    }
};