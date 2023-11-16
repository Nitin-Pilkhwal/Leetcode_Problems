#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    #define mod 1000000007
    int countHomogenous(string s) {
        int n = s.size();
        int ans = 0;
        int f = 1;
        for(int i=1;i<n;i++){
            if(s[i] != s[i-1]){
                f=1;
                ans+=f;
            }
            else{
                f++;
                ans+=f;
                ans = ans % mod;
            }
        }
        ans+=1;
        return ans;
    }
};