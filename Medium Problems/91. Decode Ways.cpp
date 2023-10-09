#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
int fun(int i, string s,vector<int> &dp) {
        if(i >= s.size()) return 1;
        if(s[i]=='0') return 0;
        if(dp[i]!=-1) return dp[i];
        int a = fun(i+1, s,dp);
        int b = 0;
        if(i < s.size()-1) {
            int t = (s[i] - '0') * 10 + (s[i+1] - '0');
            if(t >= 10 && t <= 26) 
                b = fun(i+2, s,dp);
            }
        return dp[i]=a + b;
    }

        int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n+1);
        dp[n] = 1;
        for(int i=n-1;i>=0;i--) {
            if(s[i]=='0') dp[i]=0;
            else {
                dp[i] = dp[i+1];
                if(i<n-1 && (s[i]=='1'||s[i]=='2'&&s[i+1]<'7')) dp[i]+=dp[i+2];
            }
        }
        return s.empty()? 0 : dp[0];   
    }
};