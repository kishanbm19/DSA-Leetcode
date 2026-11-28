class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s=*min_element(nums.begin(),nums.end());
        int l=*max_element(nums.begin(),nums.end());
        return gcd(s,l);
    }
};