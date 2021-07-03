class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max_1 = 0,max_2 = 0;
        int min_1 = 100000,min_2 = 100000;
        for(int i=0;i< nums.size();i++){
            if(max_1 < nums[i]){
                max_2 = max_1;
                max_1 = nums[i];
            }else if(max_2 < nums[i]){
                max_2 = nums[i];
            }
            if(nums[i] < min_1){
                min_2 = min_1;
                min_1 = nums[i];
            }else if(nums[i] < min_2){
                min_2 = nums[i];
            }
        }
        return (max_1*max_2) - (min_1*min_2);
    }
};