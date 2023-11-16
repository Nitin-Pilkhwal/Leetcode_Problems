#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        if(n==1) return 1;
        arr[0] = 1;
        int ans = arr[0];
        for(int i=1;i<n;i++){
            int diff = abs(arr[i-1] - arr[i]);
            if(diff > 1){
                arr[i] = arr[i-1] + 1;
            }
            ans = max(ans,arr[i]);
        }
        return ans;
    }
};