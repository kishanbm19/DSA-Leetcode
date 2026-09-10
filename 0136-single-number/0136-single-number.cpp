class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int v=0;
        map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        for(auto it:nums){
            if(mpp[it]==1)return it;
        }
        return -1;
        
    }
};