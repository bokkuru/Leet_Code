class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<int> dp_1;
        set<vector<int>> dp_2;
        vector<vector<int>> ans;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < dp_2.size();j++){
                if(dp_2[j][0] + dp_2[j][1] + nums[i] == 0){
                    ans.add(new vector(dp_2[j][0],dp_2[j][1],nums[i]))
                }
            }
            for(int j = 0; j < dp_1.size();j++){
                if(dp_1[j] + nums[i] + nums[i] != 0 and dp_1[j] + dp_1[j] + nums[i] != 0){
                    dp_2.insert(new vector(nums[i],dp_1[j]))
                }
            }
            dp_1.insert(nums[i]);
        }
        return ans;
    }
};