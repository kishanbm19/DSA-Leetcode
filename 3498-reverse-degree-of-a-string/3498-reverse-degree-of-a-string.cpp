class Solution {
public:
    int reverseDegree(string s) {
        long long sum=0;
        for(int i=1;i<=s.length();i++){
                int x=26-(s[i-1]-'a');
                sum=sum+(i*x);
        }
        return sum;
    }
};