#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

class Solution {
public:
    bool bfs(vector<int>& vis,vector<vector<int>>& graph,int node,int color[]){
        queue<pair<int,int>> q;
        q.push({node,0});
        while(!q.empty()){
            int x = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i:graph[x]){
                if(vis[i]==-1){
                    q.push({i,color[c]});
                    vis[i]=color[c];
                }
                else if(vis[i]==c){
                    return true;
                }
            }
        }
        return false;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        if(n<=2) return true;
        int color[2]={1,0};
        vector<int> vis(n,-1);
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                if(bfs(vis,graph,i,color)) return false;
            }
        }
        return true;
    }
};