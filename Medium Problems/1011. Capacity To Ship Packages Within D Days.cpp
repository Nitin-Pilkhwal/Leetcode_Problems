#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left=INT_MIN,right=0;
        for(int i=0;i<weights.size();i++){
            if(left<weights[i]) left=weights[i];
            right+=weights[i];
        }
        int mid,ans=right;
        while(left<=right){
            mid=left+(right-left)/2;
            if(check(weights,days,mid)){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
    bool check(vector<int>& w,int days,int capacity){
        int req=1;
        int cur=0;
        for(int i: w){
            if(cur+i >capacity){
                req++;
                cur=0;
            }
            cur+=i;
        }
        if(req>days) return false;
        return true;
    }
};