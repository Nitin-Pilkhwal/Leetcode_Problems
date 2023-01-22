#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        int m=num1.size(),n=num2.size();
        int nw=m+n;
        int num3[m+n];
        for(int i=0;i<m||i<n;i++){
            if(i<m)
                num3[i]=num1[i];
            if(i<n)
                num3[m+i]=num2[i];
        }
        sort(num3,num3+nw);
        if(nw%2!=0)
            return num3[nw/2];
        else
            return (num3[(nw+1)/2]+num3[(nw-1)/2])/2.0;
    }
};