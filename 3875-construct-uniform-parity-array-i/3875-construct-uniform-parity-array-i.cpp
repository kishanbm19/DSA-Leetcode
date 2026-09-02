class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int>nums2;
        int a1,a2;
        bool res=false;
        for(int i=0;i<nums1.size()-1;i++){
            for(int j=i+1;j<nums1.size();j++){
                a1=nums1[i]-nums1[j];
                a2=nums1[i];
                if((a1%2==0)||(a2%2==0)){res=true;}
                else {res=false;break;}
                
            }
        }
        if(res)return res;
         for(int i=0;i<nums1.size()-1;i++){
            for(int j=i+1;j<nums1.size();j++){
                a1=nums1[i]-nums1[j];
                a2=nums1[i];
                if((a1%2!=0)||(a2%2!=0)){res=true;}
                else {res=false;break;}
                
            }
        }
return res;

        
    }
};