#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    // bool found(map<char,int> mp){
    //     if(mp['a'] && mp['b'] && mp['c']) return true;
    //     return false;
    // }
    int numberOfSubstrings(string s) {
        // map<char,int> mp;
        // int count=0;
        // int j=0;
        // for(int i=0;i<s.size();i++){
        //     mp[s[i]]++;
        //     while(j<s.size() && found(mp)){
        //         mp[s[j]]--;
        //         count+=s.size()-i;
        //         j++;
        //     }
        // }
        int a=-1,b=-1,c=-1,count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a') a=i;
            else if(s[i]=='b') b=i;
            else c=i;
            count+=min(a,min(b,c))+1;
        }
        return count;
    }
};