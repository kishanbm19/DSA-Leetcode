class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxl=1;
        int cnt=1;
       
        if(nums.size()==0)return 0;
         int prev=nums[0];
        for(int i=1;i<nums.size();i++){
          
            if(prev==nums[i])continue;
            if(nums[i]==prev+1)cnt++;
            maxl=max(maxl,cnt);
            if(nums[i]!=prev+1) cnt=1;
             prev=nums[i];
        }
        return maxl;
    }
};