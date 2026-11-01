class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int op=0;

        unordered_map<int,int>mpp;
        for(int x:nums)mpp[x]++;
        for(int x:nums){
            mpp[x]--;
            if(mpp.find(k-x)!=mpp.end() && mpp[k-x]>0 && mpp[x]>=0){op++;mpp[k-x]--;}
        }
        return op;
    }
};