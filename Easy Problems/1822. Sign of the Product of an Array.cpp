#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) return 0;
            if(nums[i]<0) c++;
        }
        cout<<c;
        if(c%2==0) return 1;
        return -1;
    }
};