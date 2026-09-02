class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        bool x=true;
        while(x){
            ans.push_back(nums);
             x=next_permutation(nums.begin(),nums.end());

        }
        return ans;
    }
};