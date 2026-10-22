class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() < 2) return s.length();
        vector<int> lastseen(128,-1);
        int longest =0;
        int starter=0;
        for(int i=0;i<s.length();i++){
            if(lastseen[s[i]] >= starter){
                starter = lastseen[s[i]]+1;
            }
            lastseen[s[i]] = i;
            longest = max(i-starter+1,longest);
        }
        return longest;
    }
};