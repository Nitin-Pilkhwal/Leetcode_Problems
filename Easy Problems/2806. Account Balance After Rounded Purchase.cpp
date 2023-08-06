#include <iostream>
using namespace std;

class Solution {
public:
    int accountBalanceAfterPurchase(int t) {
        int x=0;
        if(t%10>=5) x=(t-t%10)+10;
        else x=t-t%10;
        return 100-x;
    }
};