class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int *left = &numbers[0];
        int *right = &numbers[numbers.size()-1];


         
        while(right > left ){
        if(*left + *right == target)break;
        else if(*left + *right > target) right--;
        else if(*left + *right < target)left++;
        
        }
        int leftindex = left -numbers.data() ;
        int rightindex = right - numbers.data();
        return {leftindex+1,rightindex+1};



    }
};