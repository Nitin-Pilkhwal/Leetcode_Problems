#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution {
public:
    // bool dfs(vector<int> adj[],vector<int>& pvis,vector<int>& vis,int node){
    //     vis[node]=1;
    //     pvis[node]=1;
    //     for(int i:adj[node]){
    //         if(vis[i]==0){
    //             if(dfs(adj,pvis,vis,i)) return true;
    //         }
    //         else if(pvis[i]==1) return true;
    //     }
    //     pvis[node]=0;
    //     return false;
    // }
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        //----------------------cycle detection----------------------------//
        // //if cycle present then false
        // vector<int> adj[n];
        // vector<int> vis(n,0);
        // vector<int> pvis(n,0);
        // for(int i=0;i<prerequisites.size();i++){
        //     adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        //     // adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        // }
        // for(int i=0;i<n;i++){
        //     if(vis[i]==0){
        //         if(dfs(adj,pvis,vis,i)) return false;
        //     }
        // }
        // return true;
        //----------------------cycle detection----------------------------//
        //----------------------Toposort----------------------------//
        vector<int> adj[n];
        vector<int> indegree(n,0);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
            indegree[prerequisites[i][1]]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        vector<int> topo;
        while(!q.empty()){
            int a = q.front();
            q.pop();
            topo.push_back(a);
            for(int i:adj[a]){
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }
        }
        if(topo.size()==n) return true;
        return false;
    }
};