#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int minMaxDifference(int num) {
        string s,x,y;
        int i=1;
        s = to_string(num);
        
        char a = s[0];
        while(a=='9' && i<s.size()){
            a=s[i++];
        }
        cout<<a;
        for(i=0;i<s.size();i++)
            if(s[i]==a) x+='9';
            else x+=s[i];
        a=s[0];
        for(i=0;i<s.size();i++)
            if(s[i]==a) y+='0';
            else y+=s[i];
        
        int x1=stoi(x);
        int x2=stoi(y);
        return x1-x2;
    }
};