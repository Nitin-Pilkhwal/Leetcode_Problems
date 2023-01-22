#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        vector<int> answer;
        unordered_map <int,int> alpha;
        for(i=0;i<nums.size();i++){
            if(alpha.find(target-nums[i])!=alpha.end()){
                answer.push_back(alpha[target-nums[i]]);
                answer.push_back(i);
                return answer;
            }
            alpha[nums[i]]=i;
        }
        return answer;
    }
};