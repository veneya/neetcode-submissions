class Solution {
public:
    bool isnumeric(char c){
        if(c-'0'>=0 && c-'0'<=9){
            return true;
        }
        return false;
    }
    bool isalphabet(char c){
        if(c-'a'>=0 && c-'a'<26 || c-'A'>=0 && c-'A'<26){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            while(i<j && !isnumeric(s[i]) && !isalphabet(s[i])){
                i++;
            }
            while(i<j && !isnumeric(s[j]) && !isalphabet(s[j])){
                j--;
            }
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
