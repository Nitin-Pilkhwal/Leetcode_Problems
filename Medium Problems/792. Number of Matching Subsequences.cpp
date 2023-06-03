#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int count = 0 ;
        map<char,vector<int>> m;
        int i=0;
        for(auto x : s)
            m[x].push_back(i++);
        for(int j=0;j<words.size();j++){

            string curr = words[j];
            int latest=-1;
            for(int k=0;k<curr.length();k++){

                auto it = upper_bound(m[curr[k]].begin(),m[curr[k]].end(),latest);
                if(it==m[curr[k]].end()) break;
                if(k==curr.size()-1) count++;
                latest = *it;
            }
        }
        return count ;
    }
};