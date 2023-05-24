#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <limits.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mi=INT_MAX,ma=INT_MIN;
        for(int i:nums){
            ma = max(ma,i);
            mi = min(mi,i);
        }
        int score = max(0,ma-mi-2*k);
        
        return score;
    }
};