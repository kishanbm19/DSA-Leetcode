class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        int start;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')st.push(i);
            else if(s[i]==')'){
                 start=st.top();
                 st.pop();
                 reverse(s.begin()+start+1,s.begin()+i);
            }
            
        }
        string ans;
        for(char c:s){
            if(c!='(' && c!=')')ans+=c;
        }
        return ans;



            }
};