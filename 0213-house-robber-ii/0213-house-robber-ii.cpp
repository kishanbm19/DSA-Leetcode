class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        vector<int>dp1(n,-1),dp2(n,-1);

        int flag=0;
        dp1[0]=nums[0];
        dp1[1]=max(nums[1],nums[0]);
        dp2[1]=nums[1];dp2[2]=max(nums[1],nums[2]);
        for(int i=2;i<n;i++){
            if(i<n-1)dp1[i]=max(dp1[i-1],nums[i]+dp1[i-2]);
            if(i>2)dp2[i]=max(dp2[i-1],nums[i]+dp2[i-2]);

        }
      int n1= max(dp1[n-2],dp1[n-3]);
        
        int n2= max(dp2[n-1],dp2[n-2]);
        return max(n1,n2);
    }
};