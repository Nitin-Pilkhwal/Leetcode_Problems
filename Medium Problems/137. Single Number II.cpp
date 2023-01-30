#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int setbit(int n,int pos){
        return (n | (1<<pos));
    } 
    int getbit(int n,int pos){
        return ((n & (1<<pos))!=0);
    }
    long i,j;
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(i=0;i<32;i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(getbit(nums[j],i)) count++;
            }
            if(count%3!=0) ans=setbit(ans,i);
        }
        return ans;
    }
};