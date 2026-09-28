class Solution {
public:
    int maxDepth(string s) {
            int maxDep=0;
            int count=0;
            for(int x:s){
                if(x=='(')count++;
                else if(x==')')count--;
                maxDep=max(maxDep,count);
            }
            return maxDep;
    }
};