#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int element;
        unordered_map <int,int> alpha;
        for(int i=0;i<nums.size();i++){
            alpha[nums[i]]++;
            if(alpha[nums[i]]>1)
                return true;
        }
        return false;
    }
};