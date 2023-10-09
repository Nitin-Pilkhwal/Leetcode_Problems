#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mp;
        int ans=0;
        for(int i:nums) mp[i]++;
        for(auto it:mp){
            int f=it.second;
            if(f==1) return -1;
            ans += (f/3) + ((f%3)?1:0);
        }
        return ans;
    }
};