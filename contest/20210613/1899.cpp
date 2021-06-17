class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool first = false, second = false, third = false;
        for(int j = 0; j < triplets.size();j++){
            if(triplets[j][0] == target[0] && triplets[j][1] <= target[1] && triplets[j][2] <= target[2]){
                first = true;
            }
            if(triplets[j][1] == target[1] && triplets[j][0] <= target[0] && triplets[j][2] <= target[2]){
                second = true;
            }
            if(triplets[j][2] == target[2] && triplets[j][1] <= target[1] && triplets[j][0] <= target[0]){
                third = true;
            }
        }
        if(first && second && third){
            return true;
        }
        return false;
    }
};