class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int jumps=n-1;
        int c=INT_MAX;
        vector<int>count(n,0);
        for(int i=0;i<n;i++){
            for(int j=1;i+j<n && j<=nums[i];j++){
                if(count[i+j]!=0)count[i+j]=min(count[i]+1,count[i+j]);else count[i+j]=count[i]+1;
              
                
            }
           
            
        }


        return count[n-1];
    }
};