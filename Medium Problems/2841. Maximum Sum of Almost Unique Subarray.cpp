#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long sum=0;
        long long currsum=0;
        int n=nums.size();
        map<int,int> mp;
        int dis=0;
        for(int i=0;i<k;i++){
            if(mp.find(nums[i])==mp.end()) dis++;
            mp[nums[i]]++;
            currsum+=nums[i];
        }
        if(dis>=m){
            sum=max(currsum,sum);
        }
        for(int i=k;i<n;i++){
            mp[nums[i-k]]--;currsum-=nums[i-k];
            if(!mp[nums[i-k]]) dis--;
            if(!mp[nums[i]]) dis++;
            mp[nums[i]]++;currsum+=nums[i];
            if(dis>=m) sum=max(sum,currsum);
        }
        return sum;
    }
};