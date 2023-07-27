#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,vector<bool>&vis,int node){
        vis[node]=1;
        for(int i=0;i<isConnected.size();i++){

            if(isConnected[node][i] && !vis[i]){
                dfs(isConnected,vis,i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        // int n=isConnected.size(),i,j;
        // vector<vector<int>> adj(n);
        // vector<bool> vis(n,false);
        // int provinces = 0;
        // for(i=0;i<n;i++){
        //     for(j=i+1;j<n;j++){
        //         if(isConnected[i][j]==1 && i!=j){
        //             adj[j].push_back(i);
        //             adj[i].push_back(j);}
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(!vis[i]){
        //         provinces++;
        //         dfs(adj,vis,i);
        //     }
        // }
        // return provinces;

        int n=isConnected.size(),i,j;
        vector<bool> vis(n,false);
        int provinces = 0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                provinces++;
                dfs(isConnected,vis,i);
            }
        }
        return provinces;
    }
};