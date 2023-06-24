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
    int countnoofnodes(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + countnoofnodes(root->left) + countnoofnodes(root->right);
    }
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> pq;
        pq.push(root);
        bool lastnode = false;
        while(!pq.empty()){
            TreeNode *front = pq.front();
            pq.pop();
            if(front==NULL) lastnode = true;
            else {
                if(lastnode) return false;
                // else {

                // }
            pq.push(front->left);
            pq.push(front->right);
            }
        }
        return true;
    }
};