#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int x) {
        long long n=x;
        if(n==0) return false;
        return !(n&(n-1));
    }
};