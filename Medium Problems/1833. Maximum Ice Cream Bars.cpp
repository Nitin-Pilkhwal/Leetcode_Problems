#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
            if(costs[i]<=coins){
                coins-=costs[i];
            }
            else{
                return i;
            }
        }
        int size=costs.size();
        return size;
    }
};