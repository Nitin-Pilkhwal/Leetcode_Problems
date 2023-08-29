#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int L=0,R=0;
        int b=0;
        for(char i:moves){
            if(i=='_') b++;
            else if(i=='L') L++;
            else if(i=='R') R++;
        }
        return b + max(L,R) - min(L,R);
    }
};