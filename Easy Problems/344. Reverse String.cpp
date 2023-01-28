#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0,j=s.size()-1;
        while(i<=j){
            char s1;
            s1=s[i];
            s[i]=s[j];
            s[j]=s1;
            i++;
            j--;
        }
    }
};