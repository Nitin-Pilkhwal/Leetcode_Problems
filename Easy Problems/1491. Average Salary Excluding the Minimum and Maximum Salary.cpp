#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        double ans=0;
        int n=salary.size();
        int min=INT_MAX,max=0;
        for(int i=0;i<n;i++){
            ans+=salary[i];
            if(salary[i]>max) max=salary[i];
            if(salary[i]<min) min=salary[i];
        }
        return (ans-max-min)/(n-2);
    }
};