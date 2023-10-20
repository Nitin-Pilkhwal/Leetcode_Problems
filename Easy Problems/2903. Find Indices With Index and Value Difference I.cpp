#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int a=-1,b=-1;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(j-i>=indexDifference && abs(nums[j]-nums[i])>=valueDifference){
                    a=i;
                    b=j;
                    return {a,b};
                }
            }
        }
        return {a,b};
    }
};