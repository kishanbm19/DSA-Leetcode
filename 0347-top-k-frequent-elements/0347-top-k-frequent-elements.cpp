class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        vector<int>ans;
        for(int x:nums)mpp[x]++;
        vector<pair<int,int>>v(mpp.begin(),mpp.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b){return a.second>b.second;});
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};