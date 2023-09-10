#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int dx = abs(sx-fx);
        int dy =abs(sy-fy);
        if(dx+dy ==0 && t==1) return false;
        
        int tot = min(dx, dy);
        dx -= tot;
        dy -= tot;
        tot += dx + dy;
        if (tot > t) return false;
        return true;
    }
};