class Solution {
    public:
    string sum(string s,int k){
          int i=0;
    string ans="";
    while(i<s.length()){
        int j=0;
        int sum=0;
        while(i+j<s.length() && j<k){
            int x=s[i+j]-'0';
            sum+=x;
           j++;
        }
        string c=to_string(sum);
        ans+=c;
        i=i+k;}
        return ans;
    
    }
public:
    string digitSum(string s, int k) {
  string res=s;
  while(res.length()>k)res=sum(res,k);
  return res;
    }
};