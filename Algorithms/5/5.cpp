#include <algorithm>
class Solution {
public:
    string longestPalindrome(string s) {
        int max_num = 0;
        int start = 0;
        int i;
        int j;
        for(i = 0; i < s.length() ; i++){
            for(j = 0; i-j >= 0 && i+j < s.length(); j++){
                if(s[i-j] != s[i+j]){
                    break;
                }
            }
            if(max_num < (j-1)*2 + 1){
                max_num = (j-1)*2 + 1;
                start = i-j+1;
            }
        }
        for(i = 0; i < s.length() ; i++){
            for(j = 1; i-j+1 >= 0 && i+j < s.length(); j++){
                if(s[i-j+1] != s[i+j]){
                    break;
                }
            }
            if(max_num < (j-1)*2){
                max_num = (j-1)*2;
                start = i-j+2;
            }
        }
        return s.substr(start,max_num);
    }
};