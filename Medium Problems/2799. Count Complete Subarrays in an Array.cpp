#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> st(nums.begin(),nums.end());
        int d=st.size();
        int count=0;
        int currd=0;
        map<int,int> mp;
        int l=0,r=0;
        int n=nums.size();
        while(r<n){
            if(mp[nums[r]]==0){
                currd++;
            }
            mp[nums[r]]++;
            while(currd==d){
                count+=(n-r);
                mp[nums[l]]--;
                if(mp[nums[l]]==0)
                    currd--;
                l++;
            }
            
            r++;
        }
        return count;
    }
};