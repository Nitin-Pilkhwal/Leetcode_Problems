#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int pre(char a){
        if(a=='I') return 1;
        else if(a=='V') return 2;
        else if(a=='X') return 2;
        else if(a=='L') return 3;
        else if(a=='C') return 3;
        else if(a=='D') return 4;
        return 4;
    }
    int value(char a){
        if(a=='I') return 1;
        else if(a=='V') return 5;
        else if(a=='X') return 10;
        else if(a=='L') return 50;
        else if(a=='C') return 100;
        else if(a=='D') return 500;
        return 1000;
    }
    int romanToInt(string s) {
        int sum=0,dif=0,last=0,i;
        for(i=0;i<s.size()-1;i++){
            if(pre(s[i+1])-pre(s[i])==1) 
            {
                sum+=value(s[i+1]);
                dif+=value(s[i]);
                i++;
                last=1;
            }
            else{
                sum+=value(s[i]);
                cout<<sum<<" ";
                last=0;
            }
        }
        if(i!=s.size())
        return sum-dif+value(s[s.size()-1]);
        return sum-dif;
    }
};