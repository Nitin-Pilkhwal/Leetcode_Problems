#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        string ans=s;
        int i=0,j=ans.size()-1;
        while(i<=j){
            if((s[i]<='z' && s[i]>='a')||(s[i]<='Z' && s[i]>='A')){
                if((s[j]<='z' && s[j]>='a')||(s[j]<='Z' && s[j]>='A')){
                    swap(ans[i],ans[j]);
                    i++;
                    j--;
                }
                else{
                    j--;
                }
            }
            else{
                i++;
            }
        }
        return ans;
    }
};