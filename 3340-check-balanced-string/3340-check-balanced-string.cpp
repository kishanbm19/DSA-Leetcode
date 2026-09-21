class Solution {
public:
    bool isBalanced(string s) {
        int esum=0,osum=0;
        for(int i=0;i<s.length();i=i+2){
            esum+=s[i]-'0';
            if((i+1)<s.length())osum+=s[i+1]-'0';
        }
        return esum==osum;
    }
};