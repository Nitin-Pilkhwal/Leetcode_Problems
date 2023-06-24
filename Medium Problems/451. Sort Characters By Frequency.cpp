#include <iostream>
#include <unordered_map>
#include <map>
#include <queue>
#include <string>
using namespace std;

class Solution {
public:
    class mycomp{
        public:
        bool operator()(pair<char,int> a,pair<char,int>b){
            return a.second < b.second;
        }
    };
    string frequencySort(string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++) mp[s[i]]++;
        priority_queue<pair<char,int>,vector<pair<char,int>>,mycomp> pq(mp.begin(),mp.end());
        string ans = "";
        while(!pq.empty()){
            pair<char,int> p = pq.top();
            pq.pop();
            while(p.second){
                ans+=p.first;
                p.second--;
            }
        }
        return ans;
    }
};