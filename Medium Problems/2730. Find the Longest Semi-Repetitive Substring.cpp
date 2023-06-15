#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        if(s.size()==1) return 1;
        int m=0;
        for(int i=0;i<s.size();i++){
            int flag=0;
            for(int j=i+1;j<s.size();j++){
                if(s[j]==s[j-1]) flag++;
                if(flag>1) break;
                m=max(m,j-i+1);
            }
        }
        return m;
    }
};