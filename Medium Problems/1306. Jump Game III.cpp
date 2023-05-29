#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<bool> visited(n,false);
        queue<int> q;
        q.push(start);
        visited[start]=true;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            if(arr[x]==0) return true;
            int r=x+arr[x];
            int l=x-arr[x];
            if(r>=0 && r<n && !visited[r]){q.push(r);visited[r]=true;}
            if(l>=0 && l<n && !visited[l]){q.push(l);visited[l]=true;}
        }
        return false;
    }
};