class Solution {
public:
    int minMoves(vector<int>& nums) {
        int cnt=0;
        int maxE=*max_element(nums.begin(),nums.end());
        for(int x:nums)cnt+=abs(x-maxE);
        return cnt;
    }
};