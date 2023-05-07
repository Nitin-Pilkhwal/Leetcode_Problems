#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> common(26,INT_MAX);
        vector<string> ans;
        for(auto a:words){
            vector<int> cnt(26,0);
            for(auto b : a){
                cnt[b-'a']++;
            }
            for(int i=0;i<26;i++){
                common[i]=min(common[i],cnt[i]);
            }
        }

        for(int i=0;i<26;i++){
            for(int j=0;j<common[i];j++)
                ans.push_back(string(1,i+'a'));
        }
        return ans;
    }
};