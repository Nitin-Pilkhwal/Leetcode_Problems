#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int i=0,j=0;
        vector<vector<int>> answer;
	for(i=0;i<col;i++){
		vector<int> x;
		for(j=0;j<row;j++){
			x.push_back(matrix[j][i]);
		}
		answer.push_back(x);
	}
        return answer;
    }
};