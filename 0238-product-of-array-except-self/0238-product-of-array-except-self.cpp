class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());

        for(int i=0;i<nums.size();i++){
           if(i==0){
            prefix[i] = nums[i];
            continue;
           } 
           prefix[i] = nums[i]*prefix[i-1];
        }
        for(int i=nums.size()-1;i>=0;i--){
           if(i==nums.size()-1){
            suffix[i] = nums[i];
            continue;
           } 
           suffix[i] = nums[i]*suffix[i+1];
        }
        vector<int> ans(nums.size());
        ans[0] =  suffix[1];
        ans[nums.size()-1] = prefix[nums.size()-2];
        for(int i=1;i<nums.size()-1;i++){
            ans[i] = prefix[i-1]*suffix[i+1];
        }
        return ans;

    }
};