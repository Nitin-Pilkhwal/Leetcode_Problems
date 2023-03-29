#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int reverse(int num){
        int ans=0;
        while(num){
            ans=ans*10+num%10;
            num/=10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        set <int> distinct;
        int n=nums.size();
        for(int i=0;i<n;i++){
            distinct.insert(nums[i]);
            if(nums[i]>9)
                distinct.insert(reverse(nums[i]));
        }
        return distinct.size();
    }
};