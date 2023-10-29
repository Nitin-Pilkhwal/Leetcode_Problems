#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1) return 0;
        int parent = kthGrammar(n-1,(k+1)/2);
        if(parent==0){
            return k%2==0;
        }
        else{
            return k%2==1;
        }
        return 0;
    }
};