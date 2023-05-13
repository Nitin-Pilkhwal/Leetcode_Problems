#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> diff(string s){
        vector<int> ans;
        for(int i=0;i<s.size()-1;i++){
            ans.push_back((s[i+1]-'a')-(s[i]-'a'));
        }
        return ans;
    }
    string oddString(vector<string>& words) {
        for(int i=1;i<words.size()-1;i++)
            if(diff(words[i])!=diff(words[i+1]) && diff(words[i]) != diff(words[i-1])) return words[i];
        if(diff(words[0])!=diff(words[1])) return words[0];
        return words[words.size()-1];
    }
};