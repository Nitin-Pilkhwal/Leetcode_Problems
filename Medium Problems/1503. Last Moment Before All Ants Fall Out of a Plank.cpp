#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int l=-1;
        for(int i=0;i<left.size();i++) l=max(l,left[i]);
        for(int i=0;i<right.size();i++) l=max(l,n-right[i]);
        return l;
    }
};