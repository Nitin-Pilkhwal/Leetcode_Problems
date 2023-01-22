#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& n, int t) {
        int s=0,e=n.size()-1;
        int m;
        while(s<=e){
            m=(s+e)/2;
            if(n[m]==t) return m;
            else if(n[s]<=n[m]){
                if(n[s]<=t && t<n[m])
                    e=m-1;
                else
                    s=m+1;
            }
            else{
                if(n[s]>t && t>=n[m])
                    s=m+1;
                else
                    e=m-1;
            }
        }
        return -1;
    }
};