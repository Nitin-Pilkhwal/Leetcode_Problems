#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    #define ll long long
    vector<long long> distance(vector<int>& nums) {
        vector<ll> ans;
        map<ll,ll> lc,ls,rc,rs;

        // map<long,vector<long>> mp;
        for(int i=0;i<nums.size();i++){
            rc[nums[i]]++;
            rs[nums[i]]+=i;
        }
        
        for(int i=0;i<nums.size();i++){
            ls[nums[i]]+=i;
            lc[nums[i]]++;

            rs[nums[i]]-=i;
            rc[nums[i]]--;

            ll a = lc[nums[i]]*i - ls[nums[i]] + rs[nums[i]] - rc[nums[i]]*i;
            ans.push_back(a);
        }
        return ans;
    }
};