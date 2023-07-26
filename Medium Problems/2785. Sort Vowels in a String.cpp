#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        map<char,int> mp;
        char x[s.size()];
        string t="";
        int ind[s.size()],j=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='o' && s[i]!='O' && s[i]!='I' && s[i]!='u' && s[i]!='U') x[i]=s[i];
            else {
                mp[s[i]]++;
                // x[i]='#';
                ind[j++]=i;
            }
        }
        j=0;
        for(char a='A';a<='U';a++){
            if(mp[a]!=0){
                while(mp[a]>0){
                    x[ind[j++]]=a;
                    mp[a]--;
                }
            }
        }
        for(char a='a';a<='u';a++){
            if(mp[a]!=0){
                while(mp[a]>0){
                    x[ind[j++]]=a;
                    mp[a]--;
                }
            }
        }
        for(int i=0;i<s.size();i++){
            t+=x[i];
        }
        return t;
    }
};