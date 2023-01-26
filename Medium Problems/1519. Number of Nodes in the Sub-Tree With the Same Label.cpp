#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    void dfsCountAndUpdate(int node, int prevNode, vector<vector<int>>& adjVec,string& labels, vector<int>& solution, vector<int>& freqMap){
        int prevCount = freqMap[labels[node] - 'a'];
        freqMap[labels[node] - 'a'] += 1;
        for (int nextNode : adjVec[node]) {
            if (prevNode == nextNode) continue;
            dfsCountAndUpdate(nextNode, node, adjVec, labels, solution, freqMap);
        }
        solution[node] = freqMap[labels[node] - 'a'] - prevCount;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
    vector<vector<int>> adjVec(n, vector<int>());

        for (vector<int>& edge : edges) {
            adjVec[edge[0]].push_back(edge[1]);
            adjVec[edge[1]].push_back(edge[0]);
        }
        vector<int> solution(n, 0);
        vector<int> freqMap = vector<int>(26, 0);
        dfsCountAndUpdate(0, 0, adjVec, labels, solution, freqMap);
        return solution;
    }
};