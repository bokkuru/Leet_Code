class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        char prev = NULL;
        int max_num = 0;
        map<char, int> mp;
        for(int i = 0; i < s.length(); i++){
            if(mp.find(s[i])!= mp.end()){
                count = max(count, mp[s[i]]+1);
            } 
            mp[s[i]] = i;
            max_num = max(max_num, i-count+1);
        }
        return max_num;
    }
};