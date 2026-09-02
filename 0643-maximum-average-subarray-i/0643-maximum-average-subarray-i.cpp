class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double avg=sum/k;
         double maxi=avg;
         int l=0;
        for(int i=k;i<nums.size();i++){
                
                sum+=nums[i];
                sum-=nums[l++];
                avg=sum/k;
                maxi=max(maxi,avg);
        }
        return maxi;;
    }
};