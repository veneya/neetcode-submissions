class Solution {
public:

    string encode(vector<string>& strs) {
        string code="";
        for(int i=0;i<strs.size();i++){
            for(auto c:strs[i]){
                code+=to_string((int)c+256);
            }
            code+="900";
        }
        return code;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string current="";
        for(int i=0;i<s.length();i+=3){
           string a=s.substr(i,3);
           if(a=="900"){
            ans.push_back(current);
            current="";
           }
           else{
            current+=char(stoi(a)-256);
           }
        }
        return ans;
    }
};
