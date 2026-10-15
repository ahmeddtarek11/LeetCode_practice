class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.size() != t.size() ) return false;
      array <int,26> arr{} ;
      for(int i=0;i<s.size();i++){
        arr[(int)s[i]-'a']++;
        arr[(int)t[i]-'a']--;
      }
      for(int i=0;i<arr.size();i++){
        if(arr[i]!= 0)return false;
      }
      return true;


    }
};