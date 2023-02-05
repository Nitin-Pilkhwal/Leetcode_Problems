#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(),banned.end());
        int count=0,total=0;
        vector<int> v(n);
        vector<int>:: iterator t1,t2;
        for(int i=1;i<=n;i++){
            t1=find(banned.begin(),banned.end(),i);
            if(t1==banned.end()){
                if(total+i<=maxSum){
                    v.push_back(i);
                    count++;
                    total+=i;
                }
                else{
                    return count;
                }
            }
        }
        return count;
    }
};