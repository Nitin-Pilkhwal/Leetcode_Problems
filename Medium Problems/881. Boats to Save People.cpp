#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int count=0,n=arr.size();
        int i=0,j=n-1;
        int weight=0;
        while(i<=j){
            if(arr[i]+arr[j]<=limit) i++,j--,count++;
            else j--,count++;
        }
        return count;
    }
};