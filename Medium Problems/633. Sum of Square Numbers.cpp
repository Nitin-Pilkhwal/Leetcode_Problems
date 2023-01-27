#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0) return true;
        for(long long i=0;i*i<c;i++){
            double x = sqrt(c-i*i);
            if(x==(int)x) return true;

        }
        return false;
    }
};