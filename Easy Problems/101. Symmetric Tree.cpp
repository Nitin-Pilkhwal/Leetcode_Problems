#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

//   Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
private:
    bool solve(TreeNode* l,TreeNode* r){
        if(l==NULL && r==NULL) return true;
        if(l && r && l->val==r->val)
        return (solve(l->left,r->right) && solve(l->right,r->left));
        return false;
    }
public:
    bool isSymmetric(TreeNode* root) {
        return solve(root,root);
    }
};