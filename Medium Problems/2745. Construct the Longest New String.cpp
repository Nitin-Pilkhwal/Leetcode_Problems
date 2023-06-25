#include <iostream>
using namespace std;

class Solution {
public:
    int longestString(int x, int y, int z) {
        int m = min(x,y);
        if(x==y)
            return 4*m + 2*z;
        return 4*m + 2*z + 2;
    }
};