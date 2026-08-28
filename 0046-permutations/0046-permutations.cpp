class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        bool x=1;
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        while(x){
            ans.push_back(nums);
            x=next_permutation(nums.begin(),nums.end());
        }
return ans;
    }
};