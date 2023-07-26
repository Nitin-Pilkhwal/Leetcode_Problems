#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
	int n=mat[0].size();
	vector<vector<int>> ans(m,vector<int>(n));
	queue<pair<pair<int,int>,int>> q;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(mat[i][j]==0){
				q.push({{i,j},0});
				mat[i][j]=2;
                ans[i][j]=0;
			}
		}
	}
	int rows[4] = {0,-1,0,1};
	int cols[4] = {-1,0,1,0};
    while(!q.empty()){
        int r = q.front().first.first;
        int c = q.front().first.second;
        int s = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nr = r + rows[i];
            int nc = c + cols[i];

            if(nr>=0 && nc>=0 && nr<m && nc<n && mat[nr][nc]==1){
                mat[nr][nc] = 2;
                ans[nr][nc] = s+1;
				q.push({{nr,nc},s+1});
            }
        }
    }
	return ans;
    }
};