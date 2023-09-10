#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int s,e;
            s=nums[i][0];
            e=nums[i][1];
            while(s<=e){
                mp[s]++;
                s++;
            }
        }
        int count = 0;
        for(auto it:mp) count++;
        return count;
    }
};