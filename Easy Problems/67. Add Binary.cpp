#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int i,j;
        i=a.length()-1,j=b.length()-1;
        string ans="";

        while(i>=0 || j>=0 || carry){
            if(i>=0) carry+= a[i--]=='1' ?1:0;
            if(j>=0) carry+= b[j--]=='1' ?1:0;
            ans+= carry%2?'1':'0';
            carry/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};