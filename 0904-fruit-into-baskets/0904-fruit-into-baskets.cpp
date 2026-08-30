class Solution {
public:
    int totalFruit(vector<int>& fruits) {
            int f=fruits.size();
            map<int,int>mpp;
            int maxi=0;
            int l=0;
            for(int i=0;i<f;i++){
                mpp[fruits[i]]++;
                while(mpp.size()>2){
                    mpp[fruits[l]]--;
                    if(mpp[fruits[l]]==0){
                        mpp.erase(fruits[l]);
                    }
                    l++;
                   
                }
                 maxi=max(maxi,i-l+1);
            }
            return maxi;

            
    }
};