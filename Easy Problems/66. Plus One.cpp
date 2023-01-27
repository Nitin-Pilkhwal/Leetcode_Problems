#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        vector<int> ans;
        while(i>=0){
            if(digits[i]==9){
                ans.push_back(0);
            }
            else{
                ans.push_back(digits[i]+1);
                i--;
                while(i>=0){
                ans.push_back(digits[i]);
                i--;
                }
                break;
            }
            i--;
        }
        if(ans.back()==0) ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};