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
int res=INT_MIN;
    public:
    int pathsum(TreeNode * root){
       if(root==NULL)return 0;
       int l=max(0,pathsum(root->left));
       int r=max(0,pathsum(root->right));
       int sum=l+r+root->val;
       res=max(res,sum);
       return root->val+max(0,max(l,r));
    }
    

public:
    int maxPathSum(TreeNode* root) {
        pathsum(root);
        return res;

        

    }
};