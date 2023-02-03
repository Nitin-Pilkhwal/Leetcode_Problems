#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        string res = "";
        for(int r=0;r<numRows;r++){
            int incre = 2*(numRows - 1);
            for(int i=r;i<s.size();){
                res+=s[i];
                if(r>0 && (r<numRows - 1) && ((i + incre - 2*r)<s.size())){
                    res+= s[i + incre - 2*r];
                }
                i+=incre;
            }
        }
        return res;
    }
};