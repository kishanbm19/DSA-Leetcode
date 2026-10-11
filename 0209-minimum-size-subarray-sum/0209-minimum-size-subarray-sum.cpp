class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int l=0,r=0;
        int minl=INT_MAX;
        while(r<n && l<=r){
            sum+=nums[r];
            while(sum>=target){
                minl=min(minl,r-l+1);
                sum-=nums[l++];

            }
            r++;
        }
            minl=(minl==INT_MAX)?0:minl;
            return minl;

        
    }
};