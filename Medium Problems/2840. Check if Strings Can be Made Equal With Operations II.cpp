#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n=s1.size();
        map<int,int> mp[2];
        for(int i=0;i<n;i++){
            mp[i&1][s1[i]]++;
            mp[i&1][s2[i]]--;
        }
        for(auto i:mp[0]) if(i.second !=0) return false;
        for(auto i:mp[1]) if(i.second !=0) return false;
        return true;
    }
};