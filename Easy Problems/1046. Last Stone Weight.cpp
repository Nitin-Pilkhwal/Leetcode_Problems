#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        if(stones.size()==1) return stones[0];

        priority_queue<int> q(stones.begin(),stones.end());
        int a,b;
        while(q.size()>1){
            a=q.top();
            q.pop();
            b=q.top();
            q.pop();
            if(a!=b) q.push(abs(a-b));
        }
        return q.empty()?0:q.top();
    }
};