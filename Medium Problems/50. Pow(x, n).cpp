#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0 || x==1) return 1;
        double res=1.0;
        int flag=0;
        long long nn=n;
        if(n<0){
            flag=1;
            nn=(-1)*nn;
        }
        while(nn>0){
            if(nn%2!=0){
                res=res*x;
                nn--;
            }
            else{
                x=x*x;
                nn=nn/2;
            }
        }
        double ans=(!flag)?res:(double)(1.0)/(double)(res);
        return ans;
    }
};