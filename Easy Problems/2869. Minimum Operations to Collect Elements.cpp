#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        map<int,int> mp;
        int count=0;
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            if(count==k) return n-i-1;
            if(nums[i]<=k && mp.find(nums[i])==mp.end()){
                count++;
                mp[nums[i]]++;
            }
            
        }
        return n;
    }
};