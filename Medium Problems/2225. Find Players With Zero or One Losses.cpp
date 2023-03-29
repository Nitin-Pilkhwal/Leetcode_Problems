#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>mp;
        set<int> x;
        for(int i=0;i<matches.size();i++){
            mp[matches[i][1]]++;
            x.insert(matches[i][0]);
            x.insert(matches[i][1]);
        }
        vector<vector<int>> ans;
        ans={{},{}};
        for(auto i:x){
            if(mp.find(i)!=mp.end() && mp[i]==1) ans[1].push_back(i);
            if(mp.find(i)==mp.end()) ans[0].push_back(i);
        }
        return ans;
    }
};