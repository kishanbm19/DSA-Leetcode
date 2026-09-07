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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root==nullptr)return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<double>res;
      
        while(!q.empty()){
            int s=q.size();
          
            double sum=0;
            
            
            for(int i=0;i<s;i++){
                
                  TreeNode *node=q.front();
                  q.pop();
                  sum+=node->val;
                  if(node->left)q.push(node->left);
                  if(node->right)q.push(node->right);

            }
            double avg=sum/s;
            res.push_back(avg);

        }
        return res;
    }
};