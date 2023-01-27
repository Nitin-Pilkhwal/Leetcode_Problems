#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans='{';
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target){
                if (ans>letters[i]) ans=letters[i];
                
            }
        }
        return (ans!='{')?ans:letters[0];
    }
};