#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <limits.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    void sieve(int n,vector<bool>& prime){
        for(int i=2;i*i<n;i++){
            if(prime[i]){
                for(int p=i*i;p<n;p+=i){
                    prime[p]=false;
                }
            }
        }
    }
    vector<int> closestPrimes(int left, int right) {
        vector<bool> prime(right+1,true);
        prime[0]=false;
        prime[1]=false;
        sieve(right+1,prime);
        
        int diff=INT_MAX,prev=-1;
        int num1=-1,num2=-1;
        for(int i=left;i<=right;i++){
            if(prime[i]){
                if(prev==-1){
                    prev=i;
                }
                else{
                    if(diff>(i-prev)){
                        diff=i-prev;
                        num1=prev;
                        num2=i;
                        prev=i;
                    }
                    else prev=i;
                }
            }
        }
        return {num1,num2};
    }
};