class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int maxi=max_element(nums.begin(),nums.end())-nums.begin();
         int mini=min_element(nums.begin(),nums.end())-nums.begin();
         int left=max(maxi,mini);
         int right=min(maxi,mini);
         int l=left+1;
         int r=n-right;
         int m=right+1+n-left;
         return min({l,r,m});
    }
};