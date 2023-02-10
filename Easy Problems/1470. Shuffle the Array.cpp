#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // // Bit manipulation Method
        // int i;
        // for(i=n;i<2*n;i++){
        //     int sec = nums[i]<<10;
        //     nums[i-n] = nums[i-n] | sec;
        // }
        // int allOnes = pow(2,10)-1;
        // for(i=n-1;i>=0;i--){
        //     int f = nums[i] & allOnes;
        //     int s = nums[i]>>10;

        //     nums[2*i] = f;
        //     nums[2*i+1] = s;
        // }
        // return nums;

        // By using C++ STL function 
        for(int i=0,j=n;i<n,j<2*n;i++,j++){
            nums.push_back(nums[i]);
            nums.push_back(nums[j]);
        }
        nums.erase(nums.begin(),nums.begin()+2*n);
        return nums;
    }
};