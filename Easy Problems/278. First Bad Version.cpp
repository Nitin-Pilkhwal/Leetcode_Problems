#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1,e=n;
        while(s<e){
            long m=s+(e-s)/2;
            if(isBadVersion(m)) e=m;
            else s=m+1;
            }
        return s;
    }
};