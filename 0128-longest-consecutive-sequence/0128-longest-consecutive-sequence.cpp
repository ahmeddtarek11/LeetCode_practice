class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> st(nums.begin() , nums.end());
       int ans =0;
       for(int entry : st){
        int j=1;
        int tmp =1;
        if(st.find(entry-1) != st.end()) continue;
        while(st.find(entry+j) != st.end()){
            tmp++;
            j++;
        }
        ans = max(ans,tmp);

       }
       return ans;
    }
};