#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans=0;
        int c=0,i;
        for(i=0;i<k;i++){
             ans+=arr[i];
        }
            if((ans/k)>=threshold) c++;
        for(i=k;i<arr.size();i++){
            ans-=arr[i-k];
            ans+=arr[i];
            if((ans/k)>=threshold) c++;
        }
        return c;
    }
};