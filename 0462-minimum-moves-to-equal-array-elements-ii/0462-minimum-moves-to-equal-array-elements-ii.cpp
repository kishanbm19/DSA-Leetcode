class Solution {
public:
    int minMoves2(vector<int>& nums) {
        long long sum=0;
        sort(nums.begin(),nums.end());
        int el=nums[nums.size()/2];
        for(int x:nums){
            sum+=abs(x-el);
        }
        return sum;
    }
};