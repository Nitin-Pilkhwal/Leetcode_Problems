#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int Max=0;
        set<char> alpha;
        int start=0,end=0;
        while(start<s.size()){
            auto it=alpha.find(s[start]);
            if(it==alpha.end()){
                Max=max((start-end+1),Max);
                alpha.insert(s[start]);
                start++;
            }
            else{
                alpha.erase(s[end]);
                end++;
            }
        }
        return Max;
    }
};