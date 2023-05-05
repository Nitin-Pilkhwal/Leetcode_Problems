#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans={{},{}};
        set<int> a(nums1.begin(),nums1.end());
        set<int> b(nums2.begin(),nums2.end());

        for(auto x : a)
            if(b.count(x)==0)
                ans[0].push_back(x);
        for(auto y : b)
            if(a.count(y)==0)
                ans[1].push_back(y);
        return ans;
    }
};