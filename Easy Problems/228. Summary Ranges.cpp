#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        string q="";
            int start,end;
        for(int i=0;i<nums.size();){
            start=i,end=i;
            while(end+1<nums.size() && nums[end]+1==nums[end+1]) end++;
            if(end>start) ans.push_back(to_string(nums[start])+"->"+to_string(nums[end]));
            else ans.push_back(to_string(nums[start]));
            i=end+1;
        }
        // if(start)
        return ans;
    }
};