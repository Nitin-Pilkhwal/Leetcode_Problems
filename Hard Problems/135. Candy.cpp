#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int i,n=ratings.size();
        int sum=0;
        vector<int> v(n),x(n);
        for(i=0;i<n;i++){
            v[i]=1;
            x[i]=1;
        }
        for(i=1;i<n;i++){
            if(ratings[i-1]<ratings[i])
                v[i]=v[i-1]+1;
        }

        for(i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])
                x[i]=x[i+1]+1;
        }
        for(i=0;i<n;i++){
            sum+=max(v[i],x[i]);
        }
        return sum;
    }
};