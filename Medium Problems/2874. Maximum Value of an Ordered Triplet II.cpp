#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        vector<int> pre,suf;
        pre=nums;
        suf=nums;
        int n=nums.size();
        for(int i=1;i<n;i++){
            pre[i] = max(pre[i],pre[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            suf[i] = max(suf[i],suf[i+1]);
        }
        long long ans=0;
        for(int i=1;i<n-1;i++){
            int vali = pre[i-1];
            int valj = nums[i];
            int valk = suf[i+1];
            long long curr = vali-valj;
            curr*=valk;
            ans=max(curr,ans);
        }
        return ans;
    }
};