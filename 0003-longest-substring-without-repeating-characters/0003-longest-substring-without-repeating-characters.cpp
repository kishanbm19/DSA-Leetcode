class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string ans="";
        int l=0,maxi=0;
        map<char,int>mpp;
        for(int r=0;r<s.length();r++){
            mpp[s[r]]++;
        ans+=s[r];
        while(mpp[s[r]]>1) {ans.erase(1,1);mpp[s[l]]--;l++;}
        maxi=max(maxi,r-l+1);
        

        }
        return maxi;
    }
};