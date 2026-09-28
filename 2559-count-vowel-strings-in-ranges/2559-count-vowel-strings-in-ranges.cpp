class Solution {

    public:
    bool isvowel(char c){
        c=tolower(c);
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>x(words.size());
            for(int i=0;i<words.size();i++){
                int n=words[i].size();
                if(isvowel(words[i][0]) && isvowel(words[i][n-1]))x[i]=1;

                
            }
            vector<int>pre(x.size()),ans(queries.size());
            pre[0]=x[0];
            for(int i=1;i<x.size();i++)pre[i]=pre[i-1]+x[i];
            for(int i=0;i<queries.size();i++){
                int l=queries[i][0];
                int r=queries[i][1];
                if(l==0)ans[i]=pre[r];
                else ans[i]=pre[r]-pre[l-1];

            }

        return ans;
    }
};