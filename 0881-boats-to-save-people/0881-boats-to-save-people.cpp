class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
     
       unordered_map<int,int>mpp;
   sort(people.begin(),people.end());
   int l=0,r=people.size()-1;
   long long cnt=0;
   while(l<=r){
    int sum=people[l]+people[r];
    if(sum<=limit){
        r--;
        l++;
        cnt++;
    }
    else {cnt++;r--;}
   }
   return cnt;
    }
};