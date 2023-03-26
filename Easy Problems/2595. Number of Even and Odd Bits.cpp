#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    string bin(int n){
        string ans="";
        int rem;
        while(n){
            rem=n%2;
            ans+=to_string(rem);
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<int> evenOddBit(int n) {
        string num;
        num = bin(n);
        cout<<num<<endl;
        vector <int> ans;
        ans={0,0};
        for(int i=num.length()-1;i>=0;i--){
            if(num[i]=='1'){
                if((num.length()-i+1)%2==0){
                    ans[0]+=1;
                }
                else{
                    ans[1]+=1;
                }
            }
        }
        return ans;
    }
};