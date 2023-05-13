#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int> res(n,0);
        vector<vector <int>> ans(n,res);
        int l=0,t=0,x=1;
        int r=n-1,b=n-1;
        while(l<=r && t<=b && x<=n*n){
            for(int i=l;i<=r;i++) ans[t][i]=x++;
            t++;
            for(int i=t;i<=b;i++) ans[i][r] =x++;
            r--;
            if(b>=t){
                for(int i=r;i>=l;i--) ans[b][i] = x++;
                b--;
            }
            if(l<=r){
                for(int i=b;i>=t;i--) ans[i][l] = x++;
                l++;
            }
        }
        return ans;
    }
};