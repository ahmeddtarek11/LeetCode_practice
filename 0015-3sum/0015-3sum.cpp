class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        int* first;
        int* mid;
        int* last;
        for (int i = 0; i + 2 != nums.size(); i++) {
            first = &nums[i];
            mid = first + 1;
            last = &*(nums.end() - 1);

            if (i != 0 && nums[i] == nums[i - 1])
                continue;

            while (last > mid) {
                if (*first + *mid + *last == 0) {
                    ans.push_back({*first, *mid, *last});
                    mid++;
                    last--;
                    while (mid < last && *mid == *(mid - 1))
                        mid++;

                    while (mid < last && *last == *(last + 1))
                        last--;
                }
                if (*first + *mid + *last > 0) {
                    last--;
                } else if (*first + *mid + *last < 0) {
                    mid++;
                }
            }
        }
        return ans;
    }
};