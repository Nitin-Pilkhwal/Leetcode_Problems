#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        string a = "Push";
        string b = "Pop";
        int size = target.size();
        int ind = 0,i=1,popcount=0;
        while(i<=n){
            if(ind == size ) break;
            if(target[ind] == i) {
                ans.push_back(a);
                ind++;
            }
            else{
                ans.push_back(a);
                ans.push_back(b);
            }
                i++;
        }
        return ans;
    }
};