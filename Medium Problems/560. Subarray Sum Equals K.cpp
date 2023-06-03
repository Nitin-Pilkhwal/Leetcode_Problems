#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        int count=0;
        long curr=0;
        for(int i=0;i<nums.size();i++){
            curr+=nums[i];
            if(curr==k) count++;
            if(mp.find(curr-k)!=mp.end()) count+=mp[curr-k];
            mp[curr]++;
        }
        return count;
    }
};