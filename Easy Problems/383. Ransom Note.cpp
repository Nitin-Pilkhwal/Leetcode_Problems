#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int size1=magazine.length();
        int size2=ransomNote.length();
        int rans[26]={0};
        int maga[26]={0};
        int index;
        for(int i=0;i<size1;i++){
            index=magazine[i]-'a';
            maga[index]++;
        }
        for(int i=0;i<size2;i++){
            index=ransomNote[i]-'a';
            rans[index]++;
        }
        for(int i=0;i<26;i++){
            if(maga[i]<rans[i]) return false;
        }
        return true;


    }
};