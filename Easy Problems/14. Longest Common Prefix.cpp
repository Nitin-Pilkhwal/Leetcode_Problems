#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        if(strs.size()==1) return strs[0];
        int s=strs.size();
        string ans="";
        
            string a=strs[0];
            string b=strs[1];
            int x=0,y=0;
            
                while(x<a.size() && y<b.size()){
                    if(a[x]==b[y]) ans+=a[x],x++,y++;
                    else break;
                }

        int i=2,k=0;
        while(i<strs.size()){
            string rem="";
            string x=strs[i];
            for(int j=0;j<x.size();j++){
                if(j<ans.size() && ans[j]==x[j]) rem+=ans[j];
                else break;
            }
            ans=rem;
            i++;
        }
        return ans;
    }
};