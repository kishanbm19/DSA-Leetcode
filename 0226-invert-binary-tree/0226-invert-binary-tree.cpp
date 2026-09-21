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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode *invert=root;
        if(root==NULL)return root;
        queue<TreeNode *>q;
        q.push(invert);
        while(!q.empty()){
            int s=q.size();

            for(int i=0;i<s;i++){
                TreeNode *temp=q.front();
                q.pop();
             
                
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);

                   swap(temp->left,temp->right);
                
                
                
            }
        }
            return invert;
        
    }
};