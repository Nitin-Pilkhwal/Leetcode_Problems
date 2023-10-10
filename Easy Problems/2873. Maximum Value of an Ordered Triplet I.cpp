#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long int ans=0;
        long long int curr=0;
        long long n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    curr=nums[i]-nums[j];
                    curr*=nums[k];
                    ans=max(ans,curr);
                }
            }
        }
        return ans;
    }
};