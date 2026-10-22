class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)return 0;
        if(s.length()==1)return 1;

        unordered_map<char,int>mp;
        int longest =0;
        int len =0;
        int start=0;
       for(int i=0;i<s.length();i++){
            
            if(mp[s[i]] == 0){
                len++;
                mp[s[i]]++;
                longest = max(longest,len);
            }
            else{
                longest = max(longest,len);
                if(s[start] == s[i] && i!=start) start++;
                else if (s[start] != s[i]){
                    while(s[start]!=s[i]){
                        mp[s[start]]--;
                        start++;
                    }
                    start++;

                }
                len = (i-start)+1;
               
            }
       }
            
        return longest;
    }
};