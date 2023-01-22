#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;


//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
private:
    void help(vector<vector<int>> &ans,TreeNode* root,int l){
        if(!root) return;
        if(l==ans.size())
            ans.push_back({root->val});
        else
            ans[l].push_back(root->val);
        help(ans,root->left,l+1);
        help(ans,root->right,l+1);
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        help(ans,root,0);
        return ans;
    }
};