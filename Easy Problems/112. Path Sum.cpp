#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

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
    bool hasPathSum(TreeNode* root, int tsum) {
        if(!root) return false;
        if(!root->left && !root->right) return root->val==tsum;
        int newsum=tsum-root->val;
        return hasPathSum(root->left,newsum) || hasPathSum(root->right,newsum);
    }
};