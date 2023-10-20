#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long size=0;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                size++;
            }
            else size=size*(s[i] - '0');
        }
        for(int i=s.size()-1;i>=0;i--){
            k=k%size;
            if(k ==0 && isalpha(s[i])){
                return string(1,s[i]);
            }
            else if(!isalpha(s[i])){
                size=size/(s[i]-'0');
            }
            else size--;
        }
        return "";
    }
};