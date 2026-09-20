class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
       vector<int>odd,even,ans;
       
     for(int i=0;(i)<nums.size();i=i+2){
        even.push_back(nums[i]);
        if((i+1)<nums.size())odd.push_back(nums[i+1]);
     }
       sort(even.begin(),even.end());
       sort(odd.begin(),odd.end());
       reverse(odd.begin(),odd.end());
       int j=0,k=0;
       for(int i=0;i<nums.size();i++){
            if(i%2==0){
                if(j<even.size())
                ans.push_back(even[j++]);
            }
            else {
                if(k<odd.size())ans.push_back(odd[k++]);
       }
       }
       return ans;
       
    }
};