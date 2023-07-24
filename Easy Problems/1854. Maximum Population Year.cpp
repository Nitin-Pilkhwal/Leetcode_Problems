#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        map<int,int> pop;
        int index=0;
        for(int i=0;i<logs.size();i++){
            pop[logs[i][0]]++;
            pop[logs[i][1]]--;
        }
        int currpop=0,maxpop=0;
        for(auto it : pop){
            currpop+=it.second;
            if(currpop>maxpop){
                maxpop = currpop;
                index=it.first;
            }
        }
        return index;
    }
};