#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int s=0,e=arr.size();
        while(s<e){
            int m=s+(e-s)/2;
            int lost=arr[m]-(m+1);
            if(lost>=k) e=m;
            else s=m+1;
        }
        return s+k;
    }
};