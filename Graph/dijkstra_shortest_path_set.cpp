/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
vector <int> dijkstra(int V, vector<vector<int>> adj[], int source)
{
    set<pair<int,int>> st;
    st.insert({0,source});
    dis[source] = 0;
    while(!st.empty()){
        auto t = *(st.begin());
        int node = t.second;
        int currdis = t.first;
        st.erase(t);
        for(auto it:adj[node]){
            int currnode = it[0];
            int wt = it[1];
            if(dis[currnode] > wt+currdis){
                if(dis[currnode] != INT_MAX){
                    st.erase({dis[currnode],currnode});
                }
                dis[currnode] = wt+currdis;
                st.insert({dis[currnode],currnode});
            }
        }
    }
    return dis;
}