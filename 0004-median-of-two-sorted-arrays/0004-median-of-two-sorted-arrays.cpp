class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     vector<int>n;
 

n.insert(n.end(), nums1.begin(), nums1.end());
n.insert(n.end(), nums2.begin(), nums2.end());
     sort(n.begin(),n.end());
     double x;
     int size=n.size();
     if(n.size()%2!=0)x=(double)n[size/2];
     else x=(double)(n[size/2]+n[(size/2)-1])/2;
     return x;
    }
};