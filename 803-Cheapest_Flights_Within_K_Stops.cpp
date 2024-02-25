class Solution {
public:
int dfs(map<int,vector<vector<int>>>& adj, int currsum, int src, int dist, int k, vector<int>& vis){
    if(src == dist) return currsum;
    if(k < 0) return 1e5;
    vis[src] = 1;
    int ans = 1e5;
    for (auto& it : adj[src]) { // iterating over elements directly
        int node = it[0];
        int val = it[1];
        if(!vis[node]){
            ans = min(ans, dfs(adj, currsum + val, node, dist, k-1, vis));
        }
        vis[node] = 0;
    }
    return ans;
}

    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
    map<int,vector<vector<int>>> adj;
    for(int i = 0; i < flights.size(); i++){
        int a = flights[i][0], b = flights[i][1], c = flights[i][2];
        vector<int > v;
        v.push_back(b);
        v.push_back(c);
        adj[a].push_back(v);
    }
    vector<int> dis(n,INT_MAX);
    dis[src] = 0;
    // int ans = dfs(adj,0,src,dst,k,vis);
    // return ans >= 1e5 ? -1 : ans; // Return -1 if no valid path found
    queue<pair<int,int>> q;
    q.push({src,0});
    int level = 0;
    while(!q.empty() && level<=k){
        int size = q.size();
        while(size -- ){
            int node = q.front().first;
            int val = q.front().second;
            q.pop();
            for(auto it:adj[node]){
                int key = it[0];
                if(dis[key] > val + it[1]){
                    dis[key] = val + it[1];
                    q.push({key,dis[key]});
                }
            }
        }
        level++;
    }
    return (dis[dst]==INT_MAX)?-1:dis[dst];
}

};