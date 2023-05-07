#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

#define mod 1000000007
class Solution {
public:
    long power(int x,int y){
        long ans=1;
        if(y==1) return x;
        if(y==0) return 1;
        if(y%2==0){
            ans=power(x,y/2);
            ans*=ans;
        }
        else{
            ans=power(x,y-1);
            ans*=x;
        }
        return ans%mod;
    }
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=0,s=0,e=nums.size()-1;
        while(s<=e){
            if(nums[s]+nums[e]<=target){
                ans+=power(2,e-s);
                ans%=mod;
                s++;
            }
            else{
                e--;
            }
        }
        return ans;
    }
};