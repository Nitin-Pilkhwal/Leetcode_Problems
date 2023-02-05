#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while(k--){
            int m=INT_MIN,idx=0;
            for(int i=0;i<gifts.size();i++){
                if(m<gifts[i]) {
                    idx=i;
                    m=gifts[i];
                }
            }
            gifts[idx]=floor(sqrt(gifts[idx]));
        }
        long long sum=0;
        for(int i=0;i<gifts.size();i++)
            sum+=gifts[i];
        return sum;
    }
};