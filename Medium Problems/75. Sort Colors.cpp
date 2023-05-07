#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    void swap(vector<int>& nums,int a,int b){
        int temp=nums[a];
        nums[a]=nums[b];
        nums[b]=temp;
    }
    void sortColors(vector<int>& nums) {
        int c=0,l=0,r=nums.size()-1;
        while(c<=r){
            if(nums[c]==0){
                swap(nums,c,l);
                c++;
                l++;
            }
            else if(nums[c]==2){
                swap(nums,c,r);
                r--;
            }
            else c++;
        }
        
    }
};