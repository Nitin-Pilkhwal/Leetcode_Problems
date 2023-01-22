#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        if(m.size()==0) return false;
        int ma=m.size(),n=m[0].size();
        int s=0,e=n-1;
        while(e>=0 && s<ma){
            int a=m[s][e];
            if(a==t) return true;
            else if(a>t) e--;
            else s++;
        }
        return false;
    }
};