#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int cur=0,total=0,idx=0;
        for(int i=0;i<gas.size();i++){
            cur+=(gas[i]-cost[i]);
            if((cur)<0){
                idx=i+1;
                cur=0;
            }
            total+=(gas[i]-cost[i]);
        }
        return (total>=0)?idx:-1;
    }
};