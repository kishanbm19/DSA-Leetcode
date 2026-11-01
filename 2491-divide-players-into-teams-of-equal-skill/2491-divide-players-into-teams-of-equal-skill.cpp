class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long sum=0;
       
        int s=skill.size();
        for(int x:skill)sum+=x;
        long long avg=sum/(skill.size()/2);
    sum=0;
     vector<int>temp(skill.begin(),skill.end());
       sort(temp.begin(),temp.end());
       for(int i=0;i<s/2;i++){
        if(temp[i]+temp[s-1-i]==avg)sum+=(temp[i]*temp[s-1-i]);
        else return -1;
       }
        
        return sum;
    }
};