class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>rem;
        int count=0;
        for(int i=0;i<time.size();i++){
            int t=time[i]%60;
            int need=(60-t)%60;
            count+=rem[need];
            rem[t]++;
        }
        return count;
    }
};