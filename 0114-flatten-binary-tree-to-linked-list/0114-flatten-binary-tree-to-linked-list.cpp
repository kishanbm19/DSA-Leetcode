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
    vector<TreeNode *>n;
    void traverse(TreeNode *root,vector<int>&n){
        if(root==NULL)return;
    n.push_back(root->val);
        traverse(root->left,n);
        traverse(root->right,n);
    }
public:
    void flatten(TreeNode* root) {
        vector<int>n;
        if(root==NULL)return;
        traverse(root,n);
      
      
        int s=n.size();
 
        for(int i=1;i<s;i++){
          
            root->left=nullptr;
            root->right=new TreeNode(n[i]);
            root=root->right;
        }
        root->left=nullptr;
        root->right=nullptr;
     
        

    }
};