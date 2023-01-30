#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> a(n+1);
        a[0]=0;
        for(int i=0;i<=n;i++){
            a[i]=a[i/2]+i%2;
        }
        return a;
    }
};