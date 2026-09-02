class Solution {
public:
    int pivotIndex(vector<int>& nums) {
            int left=0,right=0,sum=0;;
           for(int x:nums)sum+=x;
           for(int i=0;i<nums.size();i++){
           
            right=sum-left-nums[i];
            if(left==right)return i;
            left=left+nums[i];
           }
           return -1;
    }
};