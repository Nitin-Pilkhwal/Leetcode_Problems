#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    string categorizeBox(int l, int w, int h, int m) {
        float l1=l;
        float w1=w;
        float h1=h;
        l1=l1/1000;
        w1=w1/1000;
        h1=h1/1000;
        int a=0,b=0;
        string s;
        if((l1*w1*h1)>=1 ||l>=10000 ||w>=10000 ||h>=10000)
            a=1;
        if(m>=100)
            b=1;
        if(a==1 && b==1)
            s="Both";
        else if(a==1 && b==0)
            s="Bulky";
        else if(a==0 && b==1)
            s="Heavy";
        else
            s="Neither";
        return s;
    }
};