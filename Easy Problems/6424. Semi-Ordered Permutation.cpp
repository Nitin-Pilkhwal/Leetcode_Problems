#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int max=-1,min=51;
        int mini,maxj;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=max){
                max=nums[i];
                maxj=i;
            }
            if(nums[i]<min){
                min=nums[i];
                mini=i;
            }
        }
        cout<<mini<<" "<<maxj;
        if(mini<=maxj) return mini+nums.size()-maxj-1;
        return mini+nums.size()-maxj-2;
    }
};