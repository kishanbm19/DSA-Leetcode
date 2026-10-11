class Solution {
public:
    vector<int> getRow(int rowIndex) {
vector<vector<int>>ans;
ans.push_back({1});
for(int i=1;i<=rowIndex;i++){
    vector<int>res;
    for(int j=0;j<=i;j++){
        if(j==0 || j==i)res.push_back(1);
       else  res.push_back(ans[i-1][j-1]+ans[i-1][j]);
    }
    ans.push_back(res);
}
return ans[rowIndex];
     
    }
};