/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
vector <int> dijkstra(int V, vector<vector<int>> adj[], int source)
{
    // Code here
    vector<int> dis(V,INT_MAX);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,source});
    dis[source] = 0;
    while(!pq.empty()){
        int currnode = pq.top().second;
        int currdis = pq.top().first;
        pq.pop();
        for(int i=0;i<adj[currnode].size();i++){
            int wt = adj[currnode][i][1];
            int node = adj[currnode][i][0];
            if(dis[node] > wt+currdis){
                dis[node] = wt+currdis;
                pq.push({dis[node],node});
            }
        }
    }
    return dis;
}