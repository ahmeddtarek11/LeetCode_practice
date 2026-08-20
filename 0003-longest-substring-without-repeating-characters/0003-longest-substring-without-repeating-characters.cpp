class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        map<char,int> mp;
        const char* first =&s[0];
        const char* last =first+1;
        int mx=0; int len = 1;
        if(s.length() == 0)return 0;
        while (last < &s[0]+s.length()){
            if(mp.find(*first) == mp.end())mp[*first]++;
            mp[*last]++;
            if(mp[*last] > 1 ){
                while(mp[*last] != 1){
                    mp[*first]--;
                    first++;
                }
                 
            }
           
            last++;
            len= last-first;
            mx = max(len , mx);
           
        }
        if(mx ==0) mx=1;
                        
            return mx;
        }

      
    
};