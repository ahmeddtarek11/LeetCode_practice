class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size();
       vector<int> ans(n, 1);

       for(int i=1;i<n;i++){
        ans[i] = ans[i-1]*nums[i-1];  // the prefix shitfed one step - value at i is the multiplication of all indecies BEFORE i 
       }
       int postfix = nums[n-1];
       for(int i=n-2;i>=0;i--){
        ans[i]*=postfix;
        postfix*=nums[i];
       }
       return ans;

    }
};