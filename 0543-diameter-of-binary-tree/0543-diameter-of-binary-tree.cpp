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
    int d=0;
    private:
    int height(TreeNode* root){
         if(root==NULL)return 0;
       
       int l=height(root->left);
       int r=height(root->right);
        d=max(d,l+r);
       return max(l,r)+1;

    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
      
       if(root==NULL)return 0;
      height(root);
      return d;
       

        
    }
};