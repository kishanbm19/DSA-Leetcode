class NumArray {
    vector<int>prefix;
    
public:
    NumArray(vector<int>& nums) {

        int sum=0;
        prefix.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            sum=prefix[i-1]+nums[i];
            prefix.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        int ans=(left==0)?prefix[right]:prefix[right]-prefix[left-1];
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */