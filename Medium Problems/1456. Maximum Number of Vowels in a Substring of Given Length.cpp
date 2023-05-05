#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int check(char a){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u') return 1;
        return 0;
    }
    int maxVowels(string s, int k) {
        int r=0,l=0,m=0;
        while((r-l)<k){
        if(check(s[r])) m++;
        r++;
        }
        r--;
        int curr=m;
        while(r<s.size() && l<s.size()){
            r++;
            if(check(s[r])) curr++;
            if(check(s[l])) curr--;
            l++;
            m=max(curr,m);
        }
        return m;
    }
};