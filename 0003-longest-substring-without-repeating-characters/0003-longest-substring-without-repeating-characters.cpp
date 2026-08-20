class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      vector<int> lastseen(128,-1);
      int len =0;
      int start =0;

      for(int end = 0 ;end < s.length() ; end++){
       
        if(lastseen[s[end]] >= start){
            start = lastseen[s[end]]+1;
        }
        lastseen[s[end]] = end;
        len = max(end-start+1, len);


      }

        return len;
    }
};