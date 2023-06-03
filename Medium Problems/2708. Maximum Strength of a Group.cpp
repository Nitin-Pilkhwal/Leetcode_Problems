#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        if(nums.size()==1) return nums[0];

        int m=-10,ncount=0;
        int zero=0;
        long long mul_p=1,mul_n=1;

        bool pflag=false,nflag=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pflag=true;
                mul_p*=nums[i];
            }
            else if(nums[i]<0){
                nflag=true;
                if(m<nums[i]) m=nums[i];
                mul_n*=nums[i];
                ncount++;
            }
            else zero++;
        }
        if(nums.size()==zero) return 0;
        if(mul_n<0 && ncount==1 && !pflag && zero){
            return 0;
        }
        else if(mul_n<0 && ncount && !pflag && zero==0){
            return mul_n/m;
        }
        else if(mul_n<0){
            return mul_n/m*mul_p;
        }
        else if(ncount){

        }
        return mul_n*mul_p;
    }
};