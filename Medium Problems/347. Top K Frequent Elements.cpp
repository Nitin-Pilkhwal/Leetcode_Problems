#include <iostream>
#include <queue>
#include <map>
using namespace std;

class Solution {
public:
    class compare{
        public:
        bool operator()(pair<int,int>&a,pair<int,int>&b){
            return a.second > b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
        vector<int > ans;

        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        
        for(auto c:mp){
            pq.push({c.first,c.second});
            if(pq.size()>k)
                pq.pop();
        }
        while(!pq.empty()){
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};