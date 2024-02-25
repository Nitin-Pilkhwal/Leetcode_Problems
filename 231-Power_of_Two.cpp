class Solution {
public:
    bool isPowerOfTwo(int x) {
        long long n=x;
        if(n==0) return false;
        return !(n&(n-1));
    }
};