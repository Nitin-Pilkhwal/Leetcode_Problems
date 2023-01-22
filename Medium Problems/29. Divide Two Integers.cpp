#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int divide(int dd1, int dv1) {
        if(dd1==INT_MIN && dv1==-1) return INT_MAX;
        if(dd1==INT_MIN && dv1==1) return INT_MIN;

        long long int dd=abs(dd1),dv=abs(dv1);
        int res=0;
        while(dd>=dv){
            long int sum=dv,count=1;
            while(sum<=(dd-sum)){
                sum+=sum;
                count+=count;
            }
            res+=count;
            dd-=sum;
        }
        if((dd1>0 && dv1<0)||(dd1<0 && dv1>0)) return -res;
        return res;
    }
};