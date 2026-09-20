class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>odd,even;
        for(int x:nums){
            if(x%2==0)even.push_back(x);
            else odd.push_back(x);
        }
        for(int i=0;i<odd.size();i++){
            even.push_back(odd[i]);
        }
        return even;
    }
};