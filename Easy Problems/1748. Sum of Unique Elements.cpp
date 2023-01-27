#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int s=nums.size();
        int count[101]={0};
        for(int i=0;i<s;i++){
            count[nums[i]]++;
        }
        int sum=0;
        for(int i=0;i<101;i++){
            if(count[i]==1) sum+=i;
        }
        return sum;
    }
};