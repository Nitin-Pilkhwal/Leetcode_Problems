#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int s=1,end=num;
        while(s<=end){
            long long int m=s+(end-s)/2;
            long long int sq=m*m;
            if(sq==num) return true;
            else if(sq>num) end=m-1;
            else s=m+1;
        }
        return false;
    }
};