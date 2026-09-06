class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans=INT_MAX;
      int inst;
        int n=nums.size();
        vector<int>preMax(n),sufMin(n);
        preMax[0]=nums[0];
        sufMin[n-1]=nums[n-1];
        for(int i=1;i<nums.size();i++){
          preMax[i]=max(preMax[i-1],nums[i]);}
          for(int i=n-2;i>=0;i--)
          sufMin[i]=min(sufMin[i+1],nums[i]);
        for(int i=0;i<n;i++){
          inst=preMax[i]-sufMin[i];
          if(inst<=k)ans=min(ans,i);}
        
        if(ans==INT_MAX)return -1;
         return ans;
    }
};