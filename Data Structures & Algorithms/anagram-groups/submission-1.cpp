class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //for general purpose
        // unordered_map<string,vector<string>>hash;
        // for(auto s:strs){
        //     string sorted=s;
        //     sort(sorted.begin(),sorted.end());
        //     if(hash.find(sorted)!=hash.end()){
        //         hash[sorted].push_back(s);
        //     }
        //     else{
        //         hash[sorted].push_back(s);
        //     }
        // }
        // vector<vector<string>>ans;
        // for(auto vec:hash){
        //     ans.push_back(vec.second);
        // }
        // return ans;


        //when only lowercase alphabets used

        unordered_map<string,vector<string>>freqhash;
        for(auto s:strs){
            vector<int>charcount(26,0);
            for(auto c:s){
                charcount[c-'a']++;
            }
            string key;
            for(int i=0;i<charcount.size();i++){
                key+=to_string(charcount[i])+"#";
            }
            freqhash[key].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto i:freqhash){
            ans.push_back(i.second);
        }
        return ans;
    }
};
