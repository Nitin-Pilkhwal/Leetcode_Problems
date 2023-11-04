#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0,sum2=0;
        int z1=0,z2=0;
        for(int i=0;i<nums1.size();i++) {sum1+=nums1[i]; if(nums1[i]==0) z1++;}
        for(int i=0;i<nums2.size();i++) {sum2+=nums2[i]; if(nums2[i]==0) z2++;}
        sum1+=z1;
        sum2+=z2;
        if(sum2>sum1){
            swap(sum1,sum2);
            swap(z1,z2);
        }
        if(sum2 !=sum1 && z2==0) return -1;
        return sum1;
    }
};