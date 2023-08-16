#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int digit(int num){
        int ans=-1;
        while(num){
            int rem = num%10;
            ans=max(ans,rem);
            num/=10;
        }
        return ans;
    }
    int maxSum(vector<int>& nums) {
        int ans=-1;
        int sum=0;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int d = digit(nums[i]);
            if(mp.find(d)!=mp.end()){
                sum=mp[d]+nums[i];
                ans=max(ans,sum);
                mp[d]=max(mp[d],nums[i]);
            }
            else mp[d]=nums[i];
        }
        return ans;
    }
};