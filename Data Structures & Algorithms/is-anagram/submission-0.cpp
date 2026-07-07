class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>hash(26,0);
        for(auto c:s){
            hash[c-'a']++;
        }
        for(auto c:t){
            hash[c-'a']--;
        }
        for(int i:hash){
            if(i!=0){
                return false;
            }
        }
        return true;
    }
};
