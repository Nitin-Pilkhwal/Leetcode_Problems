#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<int> adj[n];
        vector<int> indegree(n,0);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++;
        }
        vector<int> topo;
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int a = q.front();
            q.pop();
            topo.push_back(a);
            for(int i:adj[a]){
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }
        }
        vector<int> null;
        if(n != topo.size()) return null;
        return topo;
    }
};