#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++)
        {
            if(low > prices[i]) low = prices[i];
            if(prices[i] - low > profit) profit = prices[i] - low;
        }
        return profit;
    }
};