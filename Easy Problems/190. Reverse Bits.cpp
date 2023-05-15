#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res;
        uint32_t ans=0;
        for(int i=0;i<32;i++){
            int lsb=n&1;
            int rlsb=lsb<<(31-i);
            ans= ans | rlsb;
            n=n>>1;
        }
        return ans;
    }
};