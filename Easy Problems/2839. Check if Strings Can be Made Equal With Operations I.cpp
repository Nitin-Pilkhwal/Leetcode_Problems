#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1==s2) return true;
        for(int i=0;i<4;i++){
            int j=(2+i)%4;
            if(s1[i]==s2[i]) continue;
            else if(s1[i]!=s2[j]) return false;
        }
        return true;
    }
};