#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + 2*t;
    }
};