#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

#define b 100
class Solution {
public:
    int guess(int a){
        if(a<b)
            return 1;
        else if(a>b)
            return -1;
        return 0;
    };

    int guessNumber(int n) {
        int front=0,end=n;
        while(front<=end){
            int mid=front+(end-front)/2;
            if (guess(mid)==-1)
                    end=mid-1;
                else if (guess (mid)==1)
                    front = mid + 1;
                else
                    return mid;
        }
        return -1;
    }
};