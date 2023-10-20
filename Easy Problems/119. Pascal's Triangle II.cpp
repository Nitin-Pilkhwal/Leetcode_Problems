#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int numrows) {
        vector<vector<int>> ans;
        for(int i=0;i<=numrows;i++){
            ans.push_back(vector<int>(i+1,1));
			for(int j=1;j<i;j++){
				ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
			}
        }
        return ans[numrows];
    }
};