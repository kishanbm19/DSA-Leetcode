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
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *ans=root,*temp=root;
        if(root==NULL){
            return new TreeNode(val);
        }
        while(root){
            temp=root;
        if(root->val<val)root=root->right;
        else root=root->left;
    }
    
    if(temp->val<val)temp->right=new TreeNode(val);
    else temp->left=new TreeNode(val);
    return ans;
    }
};