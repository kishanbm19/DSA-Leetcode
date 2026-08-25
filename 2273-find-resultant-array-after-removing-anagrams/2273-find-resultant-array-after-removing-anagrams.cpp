class Solution {
    public:
    bool isAnagram(vector<string>s,int i){
        map<int,int>mpp;
        string a=s[i-1];
        string b=s[i];
        if(a.length()!=b.length())return false;
        for(int i=0;i<a.length();i++){
            mpp[a[i]-'a']++;
            mpp[b[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(mpp[i]!=0)return false;
        }
        return true;
    }
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>s=words;
         int i=1;
        while(i<s.size()){
            if(isAnagram(s,i))s.erase(s.begin()+i);
            else i++;
        }
        return s;
        
    }
};