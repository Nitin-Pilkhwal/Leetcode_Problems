#include <iostream>
#include <vector>
using namespace std;

class Solution {
        int rows[4] = {-1,0,+1,0};
        int cols[4] = {0,1,0,-1};
public:
    void bfs(vector<vector<int>>& image,int x, int sr, int sc, int color){
        int m = image.size();
        int n = image[0].size();
        image[sr][sc]=color;      //Coloring the required cell
        for(int i=0;i<4;i++){
            int row = sr + rows[i];
            int col = sc + cols[i];
            if(row>=0 && col>=0 && row<m && col<n && image[row][col]==x && image[row][col] != color)
                bfs(image,x,row,col,color);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int x = image[sr][sc];
        bfs(image,x,sr,sc,color);
        return image;
    }
};