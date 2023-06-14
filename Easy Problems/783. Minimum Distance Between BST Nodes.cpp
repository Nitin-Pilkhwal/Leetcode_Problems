#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <limits.h>
#include <algorithm>
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
    void preorder(TreeNode* root,int& prev,int& ans){
        if(root==NULL) return ;
        preorder(root->left,prev,ans);
        ans = min(ans,abs(root->val-prev));
        prev=root->val;
        preorder(root->right,prev,ans);
    }
    int minDiffInBST(TreeNode* root) {
        int prev = -1e6+1;
        int ans=INT_MAX;
        preorder(root,prev,ans);
        return ans;
    }
};