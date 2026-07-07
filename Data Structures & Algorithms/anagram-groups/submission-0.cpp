class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>hash;
        for(auto s:strs){
            string sorted=s;
            sort(sorted.begin(),sorted.end());
            if(hash.find(sorted)!=hash.end()){
                hash[sorted].push_back(s);
            }
            else{
                hash[sorted].push_back(s);
            }
        }
        vector<vector<string>>ans;
        for(auto vec:hash){
            ans.push_back(vec.second);
        }
        return ans;
    }
};
