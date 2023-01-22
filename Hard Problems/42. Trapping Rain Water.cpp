#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int size=height.size();
        int right[size];
        int left[size];

        int i;

        left[0]=height[0];
        for(i=1;i<size;i++){
            left[i]=max(left[i-1],height[i]);
        }

        right[size-1]=height[size-1];
        for(i=size-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }

        int sum=0;
        for(i=1;i<size;i++){
            sum+=(min(left[i],right[i])-height[i]);
        }

        return sum;
    }
};