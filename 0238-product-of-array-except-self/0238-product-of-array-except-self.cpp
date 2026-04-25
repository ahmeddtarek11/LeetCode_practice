class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     vector<int> res(nums.size(), 1 );

     int m =1;
     for(int i=0;i<nums.size();i++){
       res[i]*=m;
       m*=nums[i];
     }

      m = 1;
     for(int i=nums.size()-1;i>=0;i--){
        res[i]*=m;
        m*=nums[i];
     }

     return res;



    }
};