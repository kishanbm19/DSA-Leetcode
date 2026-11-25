class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int l=0,r=tokens.size()-1;
        int score=0;
        int maxs=0;
        while(l<=r){
            if(power>=tokens[l]){
                power-=tokens[l];
                score++;
                l++;
                maxs=max(maxs,score);
            }
            else if(score>=1){
                power+=tokens[r];
                score--;
                r--;
            }
            else break;
            

        }
        return maxs;
    }
};