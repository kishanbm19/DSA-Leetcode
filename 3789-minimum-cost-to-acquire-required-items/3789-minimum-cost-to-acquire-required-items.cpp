class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
      
   long long c1,c2,c3;
   c1=1LL*need1*cost1+1LL*need2*cost2;
   c2=1LL*max(need1,need2)*costBoth;
   long long mn=min(need1,need2);
   c3=1LL*mn*costBoth+1LL*(need1-mn)*cost1+1LL*(need2-mn)*cost2;
   return (long long)min(c1,min(c2,c3));
    }
};