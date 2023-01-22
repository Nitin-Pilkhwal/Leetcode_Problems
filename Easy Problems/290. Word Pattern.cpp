#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string> wds;
        istringstream ss(s);
        unordered_map<char,string> n;
        string w;
        set<string>a;
        while (ss>>w) {
            wds.push_back(w);
        }
        if(wds.size()!=p.size()) return false;
        for(int i=0;i<p.size();i++){
            
            if(n.find(p[i])!=n.end()){
                if(n[p[i]]!=wds[i])
                    return false;
            }
            else{
                if(a.find(wds[i])!=a.end()) return false;
                n[p[i]]=wds[i];
                a.insert(wds[i]);
            }
        }
        return true;
    }
};