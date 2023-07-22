#include <bits/stdc++.h>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    int goodNodes(TreeNode* root) {
        int max = root->val;
        int count = 0;
        dfs(root, max, count);
        return count;
    }

    void dfs(TreeNode *root, int max,int &count){
        if(root == NULL)
            return;
        if(root-> val >= max)
        {    count++;
            max = root->val;
        }
        dfs(root->left, max, count);
        dfs(root->right, max, count);

    }
};