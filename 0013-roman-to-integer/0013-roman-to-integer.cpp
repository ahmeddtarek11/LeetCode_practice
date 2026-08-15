class Solution {
public:
    int romanToInt(string s) {
       map<char, int> nums = {{'I',1},{'V',5} , {'X',10} ,{'L',50},{'C',100}, {'D',500} ,{'M',1000}};
        int sum = 0;
       for(int i=0;i<s.length();i++){
        if(i+1 < s.length() && nums[s[i+1]] > nums[s[i]]){
            sum-=nums[s[i]];
        }
        else{
            sum+=nums[s[i]];
        }
        
       }
       return sum;
    }
};