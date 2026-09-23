class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        while(i<n){
            if(arr[i]==0){
                arr.insert(arr.begin()+i,0);
                i=i+2;
                arr.pop_back();
            }
            else i++;
        }
    }
};