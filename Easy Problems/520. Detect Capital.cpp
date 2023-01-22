#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int size1=word.size(),i,counter=0;
        for(i=0;i<size1;i++){
            if(word[i]>='A' && word[i]<='Z')
                counter++;
        }
        if(counter==size1 || (counter==1 && (word[0]>='A' && word<="Z"))|| counter==0)
            return true;
        else
            return false;
    }
};