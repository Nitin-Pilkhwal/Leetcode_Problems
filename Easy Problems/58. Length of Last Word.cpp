#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0;
        string word=" ";
        for(i=s.size()-1;i>=0;i--){
            if(s[i]==' ' && word ==" "){
                continue;
            }
            else if(s[i]==' ' && word != " "){
                return word.size()-1;
            }
            else{
                word+=s[i];
            }
        }
        return word.size()-1;
    }
};