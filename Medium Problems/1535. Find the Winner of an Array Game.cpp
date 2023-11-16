#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int mx = arr[0];
        int count = 0;
        for(int i=1;i<arr.size();i++){
            if(mx > arr[i]){
                count++;
            }
            else{
                count=1;
                mx = arr[i];
            }
            if(count == k) return mx;
        }
        // if(count == arr.size()-1) return mx;
        return mx;

    }
};