class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int ,int> mp;
        for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq ;
        for(auto entry : mp ){
            pair<int,int> pp = {entry.second , entry.first};
            pq.push(pp);
        }
        vector<int> ans; 
        for(int i=0;i<k;i++){
            pair val = pq.top();
            ans.push_back(val.second);
            pq.pop();
        }
        return ans;
    }
};