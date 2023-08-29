#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        long long sum=0;
        int i=1;
        int count=1;
        map<int,int> mp;
        while(count<=n){
            if(mp.find(target-i)==mp.end()){
                sum+=i;
                mp[i]++;
                count++;
            }
            i++;
        }
        return sum;
    }
};