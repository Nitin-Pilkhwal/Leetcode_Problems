#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=arr.size()-1,m;
        while(start<end){
            m=(end+start)/2;
            
            if(arr[m]>arr[m-1] && arr[m]>arr[m+1]) return m;
            else if(arr[m]<arr[m+1]) start=m+1;
            else end=m;
        }
        return start;
    }
};