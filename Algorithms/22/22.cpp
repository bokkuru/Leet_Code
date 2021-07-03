class Solution {
public:
    vector<string> helper(int n) {
        if(n == 1){
            vector<string> ans = {"()"};
            return ans;
        }
        set<string> tmp;
        for(auto x : helper(n-1)){
            tmp.insert("("+x+")");
        }
        for(int i = 1,j = n-1; i<=j ; i++,j--){
            for(auto x : helper(i)){
                for(auto y: helper(j)){
                    tmp.insert(x+y);
                    tmp.insert(y+x);
                }
            }
        }
        vector<string> ans(tmp.begin(),tmp.end());
        return ans;
    }
    vector<string> generateParenthesis(int n) {
        return helper(n);
    }
};