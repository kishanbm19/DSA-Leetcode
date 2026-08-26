class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
  int l=0;
  int cnt=0;
  string cur,ans="";
  for(int i=0;i<s.length();i++){
    if(s[i]=='1')cnt++;
    while(cnt==k){
        while(l<=i && s[i]=='0')l++;
        cur=s.substr(l,i-l+1);
        if(ans==""||cur.length()<ans.length()||(cur.length()==ans.length() && cur<ans))ans=cur;
        if(s[l]=='1')cnt--;
        l++;
    }
  }
  return ans;
    }
};