#include <iostream>
#include <unordered_map>
#include <map>
#include <queue>
using namespace std;
class Solution {
public:
    class node{
        public:
        int row;
        long long sum;
        node(int a,long long c){
            this->row = a;
            this->sum = c;
        }
    };
    class compare{
        public:
        bool operator()(node a,node b){
            return a.sum < b.sum;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<node,vector<node>,compare> pq;
        vector<vector<int>> ans;
        for(int i=0;i<points.size();i++){
            long long sum = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            node temp = node(i,sum);
            if(pq.size()<k){
                pq.push(temp);
            }
            else{
                if(sum<pq.top().sum){
                    pq.pop();
                    pq.push(temp);
                }
            }
        }
        while(!pq.empty()){
            ans.push_back({points[pq.top().row][0],points[pq.top().row][1]});
            pq.pop();
        }
        return ans;
    }
};