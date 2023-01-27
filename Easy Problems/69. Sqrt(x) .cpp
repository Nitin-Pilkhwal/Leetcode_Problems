#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1) return 1;
        int s=0,end=x,m;
        while(s<end){
            long long int m=s+((long)end-s+1)/2;
            if(m==sqrt(x)) return m;
            else if(m>sqrt(x)) end=m-1;
            else  s=m;
        }
        return s;
    }
};