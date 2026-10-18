class Solution {
public:
    bool isPalindrome(string s) {
        char *first = &s[0];
        char *last = &s[s.size()-1];
        while(last > first ){
            while (first < last && !is_alphanumeric(*first)) first++;
            while (first < last && !is_alphanumeric(*last)) last--;
            if(tolower(*first) != tolower(*last)  ) return false;
            first++;
            last--;
        }
        
        return true;
    }
     bool is_alphanumeric(char c){
        return((c >= 'a' && c <= 'z') || (c >= 'A' && c<='Z') || (c >= '0' && c <= '9'));
    }
};