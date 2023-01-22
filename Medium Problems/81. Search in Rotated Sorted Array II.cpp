#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& n, int t) {
        int s=0;
        int e=n.size()-1;
        while(s<=e){
            int m=(s+e)/2;
            if(n[m]==t) return true;
            if(n[s]==n[m] && n[e]==n[m]){
                s++;
                e--;
            }
            else if(n[m]>=n[s]){
                if(n[s]<=t && t<n[m])
                    e=m-1;
                else
                    s=m+1;
            }
            else{
                if(n[m]<t && t<=n[e])
                    s=m+1;
                else
                    e=m-1;
            }
        }
        return false;
    }
};