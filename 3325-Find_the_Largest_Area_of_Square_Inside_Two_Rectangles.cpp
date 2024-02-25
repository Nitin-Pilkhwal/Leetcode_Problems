class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        int n = bottomLeft.size();
    long long maxSquareArea = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int left = max(bottomLeft[i][0], bottomLeft[j][0]);
            int right = min(topRight[i][0], topRight[j][0]);
            int bottom = max(bottomLeft[i][1], bottomLeft[j][1]);
            int top = min(topRight[i][1], topRight[j][1]);

            // Calculate side length of the largest square that can fit inside the intersection
            int side = min(right - left, top - bottom);
            if (side > 0) { // If intersection exists
                long long temp = (long long)side * side;
                maxSquareArea = max(maxSquareArea, temp);
            }
        }
    }

    return maxSquareArea;
    }
};