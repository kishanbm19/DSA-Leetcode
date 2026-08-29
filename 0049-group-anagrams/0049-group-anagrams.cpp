class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        string word;
                map<string,vector<string>>mpp;
                for(auto x:strs){
                    word=x;
                    sort(word.begin(),word.end());
                   mpp[word].push_back(x);

                }
                for(auto x:mpp){
                    ans.push_back({x.second});
                }
                return ans;
    }
};