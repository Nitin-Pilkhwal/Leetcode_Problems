#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
        for(int i=0;i<32;i++){
            if(n & (1<<i)) c++;
        }
        return c;
    }
};