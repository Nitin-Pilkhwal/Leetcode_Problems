#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        ans.push_back(pref[0]);
        int n=pref.size();
        if(n==1) return ans;
        for(int i=1;i<n;i++){
            int last = pref[i]^pref[i-1];
            ans.push_back(last);
        }
        return ans;
    }
};