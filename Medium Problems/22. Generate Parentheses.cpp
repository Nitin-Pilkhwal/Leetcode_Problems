#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    void fun(vector<string>& ans,int open,int close,string s){
        if(open==0 && close==0){
            ans.push_back(s);
        }
        if(open>0){
            s+='(';
            fun(ans,open-1,close,s);
            s.erase(s.length() - 1, 1);
        }
        if(open<close){
            s+=')';
            fun(ans,open,close-1,s);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str="";
        fun(ans,n,n,str);
        return ans;
    }
};