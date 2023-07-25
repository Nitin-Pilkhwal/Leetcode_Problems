#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char s) {
        
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            string str= "";
            for(char j:words[i]){
                if(j!=s) str+=j;
                else {
                    if(str != "" )
                    ans.push_back(str);
                    str="";
                }
            }
            if(str != "" ) ans.push_back(str);
        }
        return ans;
    }
};