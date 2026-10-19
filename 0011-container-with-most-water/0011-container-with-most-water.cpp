class Solution {
public:
    int maxArea(vector<int>& height) {
        int *left = &height[0];
        int *right = &height[height.size()-1];
        int mx= 0;
      
        while(left < right){
            int area = (right-left) * min(*left, *right);
            mx = area > mx ? area : mx; 
            if(*left > *right) right--;
            else left++; 
        }
        return mx;
    }
};