class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans; 
        unordered_map<int , int> mp;
        for(int i=0;i<nums.size();i++){
            mp.insert({nums[i] , i});
        }
        for(int i=0;i<nums.size();i++){
            auto t = mp.find(target-nums[i]);
            if(t != mp.end() && t->second != i){
                ans.push_back(t->second);
                ans.push_back(i);
                return ans;
            }
        }
        return ans;

    }

};