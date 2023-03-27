#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        // if(needle.size()==0) return 0;
        // int i=0,j=0,k=0;
        // while(i<haystack.size()){
        //     j=0,k=i;
        //     while(haystack[k]==needle[j] && k<haystack.size() && j<needle.size()){
        //         j++,k++;
        //     }
        //     if(j==needle.size())
        //         return k-j;
        //     if(k!=i)
        //     i+=(k-i+1);
        //     else
        //     i++;
        // }
        // return -1;
        if(haystack.find(needle)!=string::npos)
            return haystack.find(needle);
        return -1;
    }
};