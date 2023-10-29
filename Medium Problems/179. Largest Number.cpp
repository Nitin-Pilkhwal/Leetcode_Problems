#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(int i:nums) v.push_back(to_string(i));
        // sort(v.begin(),v.end(),custom_comparator);
        sort(v.begin(), v.end(), [](string &a, string&b){return a + b > b + a;});
        string ans;
        for(string s:v) ans+=s;
        int i=0;
        while(i+1<ans.size()  && ans[i]=='0') i++;
        return ans.substr(i);
    }
};