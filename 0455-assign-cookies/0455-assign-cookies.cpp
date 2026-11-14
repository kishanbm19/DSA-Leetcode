class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int  gr=g.size(),c=s.size();
        int output=0;
        int i=0,j=0;
while(i<gr && j<c){
    if(s[j]>=g[i]){output++;i++;j++;}
    else j++;
}
        
   
        return output;

    }
};