#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int next(int n){
        int totalSum = 0;
        while(n>0){
            int d=n%10;
            n=n/10;
            totalSum+=d*d;
        }
        return totalSum;
    }
    bool isHappy(int n) {
        set<int> st;
        while(st.find(n) == st.end() && n!=1){
            st.insert(n);
            n=next(n);
        }
        return n==1;        
    }
};