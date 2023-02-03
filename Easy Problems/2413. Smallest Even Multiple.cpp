#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0) return n;
        return n*2;
    }
};