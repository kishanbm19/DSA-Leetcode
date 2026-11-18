class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0)return false;
        map<int,int>mpp;
        int required;
        for(int x:hand)mpp[x]++;
       
    while(!mpp.empty()){
        int small=mpp.begin()->first;
        for(int i=0;i<groupSize;i++){
             required=small+i;
            if(mpp.find(required)==mpp.end())return false;
            mpp[required]--;
             if(mpp[required]==0)mpp.erase(required);
        }

       
    }
    return true;
    }
};