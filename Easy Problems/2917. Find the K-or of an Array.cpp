#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<31;i++){
            int c=0;
            for(int j=0;j<nums.size();j++){
                if((nums[j]>>i) & 1) c++;
            }
            if(c>=k) ans += 1<<i;
        }
        return ans;
    }
};