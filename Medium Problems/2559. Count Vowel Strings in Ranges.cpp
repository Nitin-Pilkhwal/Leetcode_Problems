#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int i;
        vector<int> ans;
        vector<int> x(words.size(),0);
        for(i=0;i<words.size();i++){
            string s=words[i];
            if((s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u' )&&(s[s.size()-1]=='a' || s[s.size()-1]=='e' || s[s.size()-1]=='i' || s[s.size()-1]=='o' || s[s.size()-1]=='u')) x[i]=1;
            else x[i]=0;
        }
        for(i=1;i<x.size();i++){
            x[i]=x[i]+x[i-1];
        }
        for(i=0;i<queries.size();i++){
            if(queries[i][0]==0) ans.push_back(x[queries[i][1]]);
            else ans.push_back(x[queries[i][1]] - x[queries[i][0]-1]);
        }
        return ans;
    }
};
