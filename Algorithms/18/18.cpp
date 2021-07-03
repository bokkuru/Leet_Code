class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        if(nums.size() < 4){
            vector<vector<int>> vec(ans.begin(),ans.end());
            return vec;
        }
        for(int i = 0; i < nums.size()-3;i++){
            for(int j = i+1; j < nums.size()-2;j++){
                for(int k = j+1; k < nums.size()-1;k++){
                    for(int l = k+1; l < nums.size();l++){
                        int sum = nums[i]+nums[j]+nums[k]+nums[l];
                        if(target == sum){
                            vector<int> tmp = {nums[i],nums[j],nums[k],nums[l]};
                            ans.insert(tmp);
                            break;
                        }else if(target < sum){
                            break;
                        }
                    }
                }
            }
        }
        vector<vector<int>> vec(ans.begin(),ans.end());
        return vec;
    }
};