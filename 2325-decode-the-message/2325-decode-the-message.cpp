class Solution {
public:
    string decodeMessage(string key, string message) {
        string code="";
        unordered_map<char,char>mpp;
        int x='a';
        for(int i=0;i<key.length();i++){
            if(key[i]==' ')continue;
            if(mpp.find(key[i])==mpp.end())
            {mpp[key[i]]=x;x++;}
        
        }
        for(int i=0;i<message.length();i++){
            if(message[i]==' ')code+=' ';
            else {
                code+=mpp[message[i]];
            }
        }
        return code;
        
    }
};