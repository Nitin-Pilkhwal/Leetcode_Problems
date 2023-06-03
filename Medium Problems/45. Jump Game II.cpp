#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int ri=0,rs=0,step=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            ri=max(ri,i+nums[i]);
            if(rs==i){
                step++;
                rs=ri;
            }
            if(rs>=n-1) return step;
        }
        return step;
    }
};