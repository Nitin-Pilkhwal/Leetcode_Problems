#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string sn="",tn="";
        int count=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='#') count++;
            else if(count!=0){
                count--;
                // continue;
            }
            else sn+=s[i];
        }
        count=0;
        for(int i=t.size()-1;i>=0;i--){
            if(t[i]=='#') count++;
            else if(count!=0){
                count--;
                // continue;
            }
            else tn+=t[i];
        }
        // cout<<tn;
        return (sn==tn);
    }
};