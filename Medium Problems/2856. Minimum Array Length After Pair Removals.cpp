#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int f=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(f<mp[nums[i]]) f=mp[nums[i]];
        }
        if(n-f>=f) return n%2;
        return 2*f - n;
    }
};