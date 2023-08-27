#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumSum(int n, int k) {
        int i=1;
        int count=0;
        int sum=0;
        map<int,int> mp;
        while(count<n){
            if(mp.find(k-i)==mp.end()){
                count++;
                mp[i]++;
                sum+=i;
            }
            i++;
        }
        return sum;
    }
};