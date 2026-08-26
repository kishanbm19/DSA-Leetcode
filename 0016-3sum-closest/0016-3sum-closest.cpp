class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=0,mini=INT_MAX;
        int ans=-1;
        sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size()-2;i++){
        if(i>0 && nums[i-1]==nums[i])continue;
        int l=i+1,r=nums.size()-1;
        while(l<r){
            sum=nums[i]+nums[l]+nums[r];
        
            if(mini>abs(sum-target)){
                mini=abs(sum-target);
                ans=sum;
            }
            else if(sum<target)l++;
            else r--;
        }}
        return ans;
      }
    
        
    
};