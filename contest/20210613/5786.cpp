class Solution {
public:
    int maximumRemovals(string s, string p, vector<int>& removable) {
        map<char,vector<int>> index;
        for(int i = 0; i < s.length(); i ++ ){
            if(p.find(s[i]) != string::npos){
                if(map.find(s[i]) == map.end ){
                    vector<int> tmp(i);
                    map[s[i]] = tmp;
                }else{
                    vector<int> tmp(i)
                }
            }
        } 
    }
};