#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& word) {
        string a = "qwertyuiop";
        string A = "QWERTYUIOP";
        string b = "asdfghjkl";
        string B = "ASDFGHJKL";
        string c = "zxcvbnm";
        string C = "ZXCVBNM";

        // int flag ;
        string s;
        // if(a.find(s[0]) != string::npos || A.find(s[0]) != string::npos) flag = 1;
        // else if(b.find(s[0]) != string::npos || B.find(s[0]) != string::npos) flag = 2;
        // else if(c.find(s[0]) != string::npos || C.find(s[0]) != string::npos) flag = 3;

        
        int i,j;
        int c1 = 0,c2 = 0,c3 = 0;
        for(i=0;i<word.size();i++){
            s = word[i];
            c1 = 0,c2 = 0,c3 = 0;
            for(j=0;j<s.size();j++){
                if( ((a.find(s[j]) != string::npos) || (A.find(s[j]) != string::npos)) ) {c1++;}
                else if(((b.find(s[j]) != string::npos) || (B.find(s[j]) != string::npos)) ) {c2++;}
                else if(((c.find(s[j]) != string::npos) || (C.find(s[j]) != string::npos)) ) {c3++;}
            }
            if(c1!=word[i].size() && c2!=word[i].size() && c3!=word[i].size()){
                word.erase(word.begin()+i);
                i--;
            }
        }
        return word;
    }
};