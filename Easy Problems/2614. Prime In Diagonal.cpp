#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int primeornot(int val){
        if(val<=1) return 0;
        int i=2;
        while(i<=val/2){
            if(val%i==0) return 0;
            i++;
        }
        return 1;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int max=0;
        int i,j;
        int n=nums.size();
        for(i=0;i<nums.size();i++){
            if(nums[i][i]>max && primeornot(nums[i][i])) max=nums[i][i];
            if(nums[i][n-i-1]>max && primeornot(nums[i][n-i-1])) max=nums[i][n-i-1];
        }
        return max;
    }
};