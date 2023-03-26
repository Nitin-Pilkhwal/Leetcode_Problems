#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int i,x,count=1;
        sort(arr.begin(),arr.end(),greater<int>());
        x=arr[arr.size()-1];
        for(i=1;i<arr.size();i++){
            if(arr[i-1]==arr[i]){
                count++;
            }
            else{
                cout<<count<<" ";
                if(arr[i-1]==count) return arr[i-1];
                // x=arr[i];
                count=1;
            }
        }
        return arr.back()==count?count:-1;
    }
};