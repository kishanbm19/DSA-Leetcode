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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
     map<int,map<int,multiset<int>>>nodes;
     queue<pair<TreeNode*,pair<int,int>>>q;
     if(root==NULL)return {};
     q.push({root,{0,0}});
     while(!q.empty()){
        auto p=q.front();q.pop();
        auto node=p.first;
        int x=p.second.first,y=p.second.second;
        nodes[x][y].insert(node->val);
        if(node->left)q.push({node->left,{x-1,y+1}});
        if(node->right)q.push({node->right,{x+1,y+1}});

     }
     vector<vector<int>>ans;
     for(auto x:nodes){
        vector<int>res;
        for(auto y:x.second){
            res.insert(res.end(),y.second.begin(),y.second.end());
        }
    
     ans.push_back(res);
     }
     return ans;
    }
};