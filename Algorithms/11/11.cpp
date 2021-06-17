class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1;
        int water = 0;
        while(i<j){
            if(height[i]>height[j]){
                water = max(water, height[j]*(j-i));
                j--;
            }else{
                water = max(water, height[i]*(j-i));
                i++;
            }
        }
        return water;
    }
};