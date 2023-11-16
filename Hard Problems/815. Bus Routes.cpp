#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    // void createadj(vector<vector<int>>& routes,){
        
    // }
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        unordered_map<int,vector<int>> adj;
        int n = routes.size();
        for(int i=0;i<n;i++){
            int m = routes.size();
            for(int stop:routes[i]){
                adj[stop].push_back(i);
            }
        }
        vector<bool> vis(n,0);
        queue<int> q;
        q.push(source);
        int buses = 0;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int stop = q.front();
                q.pop();
                if(stop == target) return buses;
                for(int i:adj[stop]){
                    if(vis[i]) continue;
                    vis[i]=1;
                    for(int nextstop : routes[i]) q.push(nextstop);
                }
            }
            buses++;
        }
        return -1;
    }
};