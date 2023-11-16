#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <priority_queue>
using namespace std;

class Graph {
public:
    vector<vector<pair<int,int>>> adj;
    int n;
    Graph(int n, vector<vector<int>>& edges) {
        this->n = n;
        adj.resize(n);
        for(auto edge : edges){
            adj[edge[0]].emplace_back(edge[1],edge[2]);
        }
    }
    
    void addEdge(vector<int> edge) {
        adj[edge[0]].emplace_back(edge[1],edge[2]);
    }
    
    int shortestPath(int node1, int node2) {
        return dijikstra(node1,node2);
    }
    int dijikstra(int start,int end){
        int n = adj.size();
        vector<int> dis(n,INT_MAX);
        dis[start]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,start});
        while(!pq.empty()){
            int currnode = pq.top().second;
            int currdis = pq.top().first;
            pq.pop();

            if(currdis > dis[currnode]) continue;

            for(auto it: adj[currnode]){
                int adjnode = it.first ;
                int adjdis = it.second ; //--------------------------------------// 
                if(dis[currnode] + adjdis < dis[adjnode]){
                    dis[adjnode] = dis[currnode] + adjdis;
                    pq.push({dis[adjnode],adjnode});
                }
            }
        }
        return dis[end] == INT_MAX ? -1:dis[end];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */