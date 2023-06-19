#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int sum(int a){
        return a*(a+1)/2;
    }
    int candy(vector<int>& ratings) {
        // int i,n=ratings.size();
        // int sum=0;
        // vector<int> v(n,1),x(n,1);
        // for(i=1;i<n;i++){
        //     if(ratings[i-1]<ratings[i])
        //         v[i]=v[i-1]+1;
        // }
        // for(i=n-2;i>=0;i--){
        //     if(ratings[i]>ratings[i+1])
        //         x[i]=x[i+1]+1;
        // }
        // for(i=0;i<n;i++){
        //     sum+=max(v[i],x[i]);
        // }
        // return sum;
        int u=0,l=0,c=0,sign,prev=0;
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]) sign=1;
            else if(ratings[i]<ratings[i-1]) sign=-1;
            else sign=0;
            if((prev==1 &&sign==0)||(prev==-1 &&sign>=0)){
                c=c+sum(u)+sum(l)+max(u,l);
                u=0;
                l=0;
            }
            if(ratings[i]>ratings[i-1]) u++;
            else if(ratings[i]<ratings[i-1]) l++;
            else c++;
            prev=sign;
        }
        c=c+sum(u)+sum(l)+max(u,l)+1;
        return c;
    }
};