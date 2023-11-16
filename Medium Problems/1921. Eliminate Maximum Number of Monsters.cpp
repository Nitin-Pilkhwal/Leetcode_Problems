#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int>time;
        int i,j,k,c=0;
        for(i=0;i<dist.size();i++){
            if(dist[i]%speed[i]==0)
            time.push_back((dist[i]/speed[i]));
            else
            time.push_back((dist[i]/speed[i]) +1);
        }
        sort(time.begin(),time.end());
        int ans=0;
        for(i=0;i<time.size();i++){
            if(time[i]-c<=0)
            return i;
            else
            c+=1;
        }
        return time.size();
    }
};