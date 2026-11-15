class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int mod=1e9+7;
        long long even=0,odd=0,ans=0;
        for(int x:arr){
            if(x%2==0)even++;
            else{
                swap(odd,even);
                odd++;
            } 
            ans=(ans+odd)%mod;
            even%=mod;
            odd%=mod;
        }
        return ans;
  
    }
};