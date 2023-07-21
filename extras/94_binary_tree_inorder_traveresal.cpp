#include <bits/stdc++.h>
using namespace std;

struct TreeNode{

    int val;
    TreeNode* left;
    TreeNode* right;
};


class Solution{

    vector<int> ans;
public:
    vector<int> inorderTraversal(TreeNode *root){
        iot(root);
        return ans;

    }

    void iot(TreeNode *root){
        if(root == NULL)
            return;
        iot(root->left);
        ans.push_back(root->val);
        iot(root->right);
    }

};