#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int n=numbers.size(),low=0,high=n-1;
        while(low<high)
        {
           int sum=numbers[low]+numbers[high];
           if(sum==target)
           {
               ans.push_back(low+1);
               ans.push_back(high+1);
               break;
           }
           else if(sum>target)
           high--;
           else
           low++;
        }
        return ans;
    }
};