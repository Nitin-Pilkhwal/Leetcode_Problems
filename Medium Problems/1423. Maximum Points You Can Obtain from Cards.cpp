#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        for(int i=0;i<k;i++) sum+=cardPoints[i];
        if(k==cardPoints.size()) return sum;
        int res=sum;
        for(int i=k-1;i>=0;i--){
            sum-=cardPoints[i];
            sum+=cardPoints[cardPoints.size()-k+i];
            res=max(res,sum);
        }
        return res;
    }
};