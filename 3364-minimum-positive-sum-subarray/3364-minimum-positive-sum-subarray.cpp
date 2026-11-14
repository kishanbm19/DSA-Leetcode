class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum=0;
        int minL=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size() && j-i+1<=r;j++){
                sum+=nums[j];
                if(j-i+1>=l && sum>0)minL=min(minL,sum);
            }
        }
        minL=(minL==INT_MAX)?-1:minL;
        return minL;

       
    }
};