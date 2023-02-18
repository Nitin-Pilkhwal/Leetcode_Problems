#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
         
        int carry=0;
        for(int i=num.size()-1;i>=0;i--){
            int rem=k%10;
            k=k/10;
            int x=num[i]+rem+carry;
            num[i]=x%10;
            carry=x/10;
        }
        
            while(k){
                int rem=k%10+carry;
                k=k/10;
                num.insert(num.begin(),rem%10);
                carry=rem/10;
            }
        
        if(carry)
            num.insert(num.begin(),carry);
        return num;
    }
};