#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int s=1,e=n;
        long long m;
        while(s<=e){
            m= s+(e-s)/2;
            long long coins = m*(m+1)/2;
            if(coins==n) return m;
            else if(coins>n) e=m-1;
            else s=m+1;
        }
        return e;
    }
};