class Solution {
public:
    int sumdigits(int num){
        int dig;
        int sum=0;
        while(num!=0){
            dig=num%10;
            num=num/10;
            sum+=dig;

        }
        return sum;
    }



public:
    int smallestIndex(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum=sumdigits(nums[i]);
            if(sum==i)mini=min(mini,i);
        }
        int ans=(mini==INT_MAX)?-1:mini;
        return ans;
    }
};