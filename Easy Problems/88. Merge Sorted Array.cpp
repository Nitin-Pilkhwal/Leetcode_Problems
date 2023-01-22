#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int i=m-1,j=n-1;
        while(i>=0 && j>=0){
            if(num1[i]>num2[j]){
                num1[i+j+1]=num1[i];
                i--;
            }else{
                num1[i+j+1]=num2[j];
                j--;
            }
        }
        while(j>=0){
                num1[i+j+1]=num2[j];
                j--;
        }
    }
};