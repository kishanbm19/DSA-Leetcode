class Solution {
    public:
    vector<int>sumarr(vector<int>ans){
        vector<int>x;
        for(int i=0;i<ans.size()-1;i++){
            int sum=ans[i]+ans[i+1];
            sum=sum%10;
            x.push_back(sum);
        }
        return x;
    }
public:
    int triangularSum(vector<int>& nums) {
        vector<int>res=nums;
        while(res.size()>1)res=sumarr(res);
        return res[0];
        
    }
};