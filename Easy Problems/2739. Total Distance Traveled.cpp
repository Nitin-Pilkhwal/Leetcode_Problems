#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ans=0;
        while(mainTank && additionalTank){
            if(mainTank>=5){
                ans+=5;
                mainTank-=5;
                if(additionalTank!=0) {
                    additionalTank--;
                    mainTank++;
                }
            }
            else break;
        }
        ans+=mainTank;
        return ans*10;
    }
};