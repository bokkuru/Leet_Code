class Solution {
public:
    string convert(string s, int numRows) {
        string ans = "";
        if(numRows == 1){
            return s;
        }
        for(int i = 0; i < numRows; i ++ ){
            int j = 0;
            while(i + j < s.length()){
                ans += s[i+j];
                if(i != 0 && i != numRows - 1){
                    if( i + j + 2 * (numRows - 1) - i*2 < s.length()){
                        ans += s[i + j + 2 * (numRows - 1) - i*2];
                    }
                }
                j += 2 * (numRows - 1);
            }
        }
        return ans;
    }
};