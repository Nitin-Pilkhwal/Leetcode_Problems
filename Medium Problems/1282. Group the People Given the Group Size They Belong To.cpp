#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++) mp[groupSizes[i]].push_back(i);

        vector<vector<int>> ans;

        for(const auto& it:mp){
            int key = it.first;
            vector<int> val = it.second;
            int m=val.size();
            if(key == m) ans.push_back(val);
            else if (m>key){
                for(int i = 0; i < m; i += key){
                ans.push_back(vector<int>(val.begin()+i,val.begin()+i+key));
                }
            }
        }
        return ans;
    }
};