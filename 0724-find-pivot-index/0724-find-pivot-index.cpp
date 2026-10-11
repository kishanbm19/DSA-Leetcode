class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      unordered_map<int,int>prefix;
      prefix[0]=nums[0];
      
      for(int i=1;i<nums.size();i++){
        prefix[i]=prefix[i-1]+nums[i];
      }
int left=0,right=nums.size()-1;
    while(left<nums.size()){
        if(prefix[left-1]==(prefix[right]-prefix[left]))return left;
        
    
    left++;

    }
    
    
    return -1;
}
};