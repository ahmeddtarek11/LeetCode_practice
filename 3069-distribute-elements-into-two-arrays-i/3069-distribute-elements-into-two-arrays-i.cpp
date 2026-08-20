class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        
       
        vector<int> ar1 = {nums[0]};
        vector <int>ar2 = {nums[1]};
        int len1 =0 ;
        int len2 =0;
        for(int i =2;i<nums.size();i++){
            
            if(ar1[len1] > ar2[len2]){
                ar1.push_back(nums[i]);
                len1++;
            } 
            else{
                ar2.push_back(nums[i]);
                len2++;
            } 

        
        }
            for(int i=0;i<ar2.size();i++){
                ar1.push_back(ar2[i]);
            }
        // ar2.insert(ar1.end() , ar2.begin() ,ar2.end());
        return ar1;

    }
};