#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int countarray[26]={0};
        int size=s.length();
        for(int i=0;i<size;i++){
            int index=s[i]-'a';
            countarray[index]++;
        }
        for(int i=0;i<size;i++){
            int index=s[i]-'a';
            if(countarray[index]==1) return i;
        }
        return -1;
    }
};