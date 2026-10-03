/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void traverse(TreeNode *root,multiset<int>&s){
        if(root==NULL)return;
        s.insert(root->val);
        traverse(root->left,s);
        traverse(root->right,s);
        


    }
public:
    int kthSmallest(TreeNode* root, int k) {
        multiset<int>s;
        traverse(root,s);
    auto it=s.begin();
    advance(it,k-1);
    return *it;
      
    }
};