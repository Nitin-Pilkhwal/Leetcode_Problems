#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> g;
    int dfs(vector<bool>&hasA,int node,int d,int prev){
        int temp,res=0;
        for(int &i:g[node]){
            if(i!=prev)
            {
                temp=dfs(hasA,i,d+1,node);
                if(temp) res+=temp-d;
            }
        }
        return (res || hasA[node])?(res+d):0;
    }
    int minTime(int n, vector<vector<int>>& ed, vector<bool>& hasA) {
        g.resize(n);
        for(vector<int> &e:ed){
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        return (dfs(hasA,0,0,-1)*2);
    }
};