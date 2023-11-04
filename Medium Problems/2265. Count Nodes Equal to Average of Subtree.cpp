#include <bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    pair<int,int> fun(TreeNode* root,int& ans){
        if(!root) return {0,0};
        auto [leftsum,leftcount] = fun(root->left,ans);
        auto [rightsum,rightcount] = fun(root->right,ans);

        int currsum = leftsum + rightsum + root->val;
        int currcount = leftcount + rightcount + 1;
        if(currsum/currcount == root->val) ans++;
        return {currsum,currcount};
    }
    int averageOfSubtree(TreeNode* root) {
       int result = 0;
       fun(root,result);
       return result;
    }
};