#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& num1, vector<int>& num2) {
        int size1=num1.size(),size2=num2.size();
        vector<int> answer;
        sort(num1.begin(),num1.end());
        sort(num2.begin(),num2.end());
        int i=0,j=0;
        while(i<size1 && j<size2){
            if(num1[i]==num2[j]){
                answer.push_back(num1[i]);
                i++;j++;
            }
            else if(num1[i]>num2[j]){
                j++;
            }
            else{
                i++;
            }
        }
        return answer;
    }
};