class Solution {
public:
    bool canAliceWin(int n) {
        int stone=10;
        bool a=true,b=false;
        while(true){
            if(n>=stone){
                if(a){a=false;n-=stone;stone--;b=true;}
                else if(b){b=false;n-=stone;stone--;a=true;}
            }
            else break;
        }
        return b==true;
    }
};