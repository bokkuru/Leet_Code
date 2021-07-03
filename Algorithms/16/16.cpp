class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int now = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < nums.size();i++){
            int lo = i+1, hi = nums.size()-1;
            while(lo < hi){
                int sum = nums[i] + nums[lo] + nums[hi];
                int diffrent = abs(now-target); 
                if(sum > target){
                    if(sum-target < diffrent) now = sum;
                    while(hi-1 > -1 && nums[hi] == nums[hi-1]) hi--;
                    hi--;
                }else if(sum == target){
                    return target;
                }else{
                    if(target-sum < diffrent) now = sum;
                    while(lo+1 < nums.size() && nums[lo] == nums[lo+1]) lo++;
                    lo++;
                }
            }
        }
        return now;
    }
};