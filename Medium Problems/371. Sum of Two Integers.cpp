#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        unsigned int carry;
        while(b!=0){
            carry=a & b;
            a=a^b;
            b=carry<<1;
        }
        return a;
    }
};