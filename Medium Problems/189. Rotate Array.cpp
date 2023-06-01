#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;        
        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin()+(n-k),nums.end());
        reverse(nums.begin(),nums.end());
    }
};