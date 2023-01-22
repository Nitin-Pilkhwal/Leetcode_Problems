#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int digit=0;
        int rem=0;
        while(x)
        {  
            rem= x%10;
             if(digit > INT_MAX/10 || digit < INT_MIN/10)
               return 0;
            digit = digit*10 + rem;
            x/=10;
        }
        cout<<digit;
        return digit;
    }
};