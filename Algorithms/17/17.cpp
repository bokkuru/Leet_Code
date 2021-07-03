class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits == ""){
            return vector<string>();
        }
        map<char,string> dic;
        dic['2'] = "abc";
        dic['3'] = "def";
        dic['4'] = "ghi";
        dic['5'] = "jkl";
        dic['6'] = "mno";
        dic['7'] = "pqrs";
        dic['8'] = "tuv";
        dic['9'] = "wxyz";
        vector<string> ans{""};
        for(auto num: digits){
            vector<string> tmp;
            for(auto now_char : ans){
                for(auto new_char : dic[num]){
                    string i = now_char + new_char;
                    tmp.push_back(i);
                }
            }
            ans = tmp;
        }
        return ans;
    }
};