#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
        vector<int> v(n);
        int i=0,j=1;
        for(int t=0;t<n;t++){
            if(arr[t]<0){
                v[j]=arr[t];
                j+=2;
            }
            else{
                v[i]=arr[t];
                i+=2;
            }
        }
        return v;
    }
};