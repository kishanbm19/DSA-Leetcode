class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>d1,d;
       map<int,int>mpp;
       int n=nums.size();
       int num1,num2;
        for(int i=0;i<n;i++){
        d1.push_back(i+1);
       }
       for(int i=0;i<n;i++){mpp[nums[i]]++;mpp[d1[i]]++;}
       for(int i=1;i<=n;i++){if(mpp[i]>2)num1=i;
       else if(mpp[i]==1)num2=i;}
      d.push_back(num1);d.push_back(num2);
       
       return d;
    }
};