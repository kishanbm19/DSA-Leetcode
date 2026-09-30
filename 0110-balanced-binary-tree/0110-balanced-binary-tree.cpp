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
    int l=-2,r=-2;
    int height(TreeNode *root){
    
         if(root==NULL )return 0;

          
      int l=height(root->left);
       if(l==-1)return -1;
      int r=height(root->right);
    if(r==-1)return -1;
        int h=abs(r-l);
    if(h>1)return -1;
     return max(l,r)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
    int ans= height(root);
   
     return ans!=-1 ;

    }
};