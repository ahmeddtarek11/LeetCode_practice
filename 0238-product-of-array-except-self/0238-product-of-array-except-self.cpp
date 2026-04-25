class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> prefix(nums.size());
    vector<int> suffix(nums.size());
        for(int i=0;i<nums.size();i++){
            if(i==0) prefix[i] = nums[i];
            
            else
            prefix[i] = nums[i]*prefix[i-1]; 
        }
         for(int i=nums.size()-1;i>=0;i--){
            if(i==nums.size()-1) suffix[i] = nums[i];
            
            else
            suffix[i] = nums[i]*suffix[i+1]; 
        }

        vector<int> result(nums.size());
        for(int i=0;i<nums.size();i++){
            if(i==0){
                result[i] = suffix[i+1];
            }
            else if(i==nums.size()-1){
                result[i] = prefix[i-1];
            }
            else{
                result[i] = prefix[i-1] * suffix[i+1];
            }
        }

        return result;
    }
};