#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int s=0,e=grid[0].size()-1,c=0;
        while(s<grid.size() && e>=0){
            int a=grid[s][e];
            if(a<0){
                c+=(grid.size()-s);
                e--;
            }
            else{
                s++;
            }
        }
        return c;
    }
};