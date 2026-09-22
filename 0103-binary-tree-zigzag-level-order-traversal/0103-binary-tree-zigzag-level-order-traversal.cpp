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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
     
        if(root==NULL)return {};
        queue<TreeNode *>q;
        q.push(root);
        int alt=0;
        while(!q.empty()){
            int s=q.size();
               vector<int>temp;
               for(int i=0;i<s;i++){
                TreeNode *node=q.front();q.pop();

                 if(node->left)q.push(node->left);
                 if(node->right)q.push(node->right);
                 temp.push_back(node->val);
              
               
               

               }
               if(alt==1)reverse(temp.begin(),temp.end());
               ans.push_back(temp);
               if(alt==1)alt=0;
               else alt=1;
        }
        return ans;
    }
};