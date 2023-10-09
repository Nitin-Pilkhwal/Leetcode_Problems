#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(),processorTime.end());
        sort(tasks.begin(),tasks.end(),greater<int>());
        
        int n1=processorTime.size(),n2=tasks.size();
        int ans=0;
        for(int i=0;i<n1;i++){
            int sum=0;
            for(int j=i*4;j<i*4+4;j++){
                sum=max(sum,processorTime[i]+tasks[j]);
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};