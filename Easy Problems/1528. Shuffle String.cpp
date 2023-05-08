#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        for(int i=0;i<s.size();i++)
            ans[indices[i]]=s[i];
        return ans;
    }
};