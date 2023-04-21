#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
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
    int max1=0;        
    void helper(TreeNode* root,int count,int idx){
        if(!root) return;

        max1=max(count,max1);

        if(idx==2){
            helper(root->left,count+1,1);
            helper(root->right,1,2);
        }
        if(idx==1){
            helper(root->right,count+1,2);
            helper(root->left,1,1);
        }
    }
    int longestZigZag(TreeNode* root) {
        int count=0;
        helper(root,count,1);
        helper(root,count,2);
        return max1;
    }
};