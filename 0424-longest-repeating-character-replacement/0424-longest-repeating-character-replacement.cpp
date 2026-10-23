class Solution {
public:
    int characterReplacement(string s, int k) {
        if(s.length()==1)return 1;
        int ans = 0;
        vector<int> vec(26, 0);
        vec[s[0] - 'A']++;
        int start = 0;

        for (int end = 1; end < s.length(); end++) {
            vec[s[end] - 'A']++;
            int len = end - start + 1;
            auto mx_occuerence = max_element(vec.begin(), vec.end());

            while (len - *mx_occuerence > k) {
                vec[s[start] - 'A']--;
                start++;
                len = end - start + 1;
                mx_occuerence = max_element(vec.begin(), vec.end());
            }

            ans = max(ans, len);
        }
        return ans;
    }
};