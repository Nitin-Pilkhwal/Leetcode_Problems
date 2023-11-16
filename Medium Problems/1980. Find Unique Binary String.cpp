#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans = "";
        for(int i=0;i<nums.size();i++){
            ans += (nums[i][i] == '0'?'1':'0');
        }
        return ans;
    }
};