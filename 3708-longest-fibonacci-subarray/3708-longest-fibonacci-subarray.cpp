class Solution {
    
public:
    int longestSubarray(vector<int>& nums) {
      int a=nums[0],b=nums[1];
      int sum=0;
      int maxl=2,l=0;
      for(int i=2;i<nums.size();i++){
        if(nums[i]==a+b){
            
            a=b;
            b=nums[i];
            maxl=max(maxl,i-l+1);
        }
        else {
            a=nums[i-1],b=nums[i],l=i-1;
        }
      }
   
return maxl;

    }
};