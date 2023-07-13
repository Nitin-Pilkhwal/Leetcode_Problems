#include <iostream>
#include <unordered_map>
#include <map>
#include <queue>

using namespace std;

    class compare{
        public:
        bool operator()(pair<string,int>&a,pair<string,int>&b){
            return a.second < b.second|| (a.second == b.second && a.first > b.first);
        }
    };
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<string,int>,vector<pair<string,int>>,compare>pq;
        map<string,int> mp;

        for (const string& s : words) {
            mp[s]++;
        }
        for (auto it = mp.begin();it!=mp.end();it++) {
            pq.push({(*it).first,(*it).second});
        }

        vector<string> ans;
        while(k--) {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};