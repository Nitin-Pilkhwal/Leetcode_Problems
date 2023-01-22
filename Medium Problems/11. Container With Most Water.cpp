#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max1=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            int cur=(height[i]<height[j]?height[i]:height[j])*(j-i);
            max1=max1<cur?cur:max1;
            (height[i]<height[j])?i++:j--;
        }
        return max1;
    }
};