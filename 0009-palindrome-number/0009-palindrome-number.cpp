class Solution {
public:
    bool isPalindrome(int x) {
        long rn=0;
        int p=x;
        if(x<0)
        return false;
        while(x>0){
      
        int ld=x%10;
        rn=(rn*10)+ld;
        x/=10;
      
      
        } 
  
        if(rn==p) return true;
        else  return false;
        
    }
};