class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int>st1(nums1.begin(),nums1.end()),st2(nums2.begin(),nums2.end());
    vector<int>v;
    for(int x:st1){
        if(st2.count(x))v.push_back(x);
    }
    return v;

     
    }
};