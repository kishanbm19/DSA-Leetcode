class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>>answer(matrix.begin(),matrix.end());
        int m=matrix.size(),n=matrix[0].size();
        int maxi=INT_MIN;
        vector<int>l(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                maxi=max(maxi,answer[j][i]);

            }
            l[i]=(maxi);
            maxi=0;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(answer[j][i]==-1)answer[j][i]=l[i];
            }
        }
        return answer;

    }
};