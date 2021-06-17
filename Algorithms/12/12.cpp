class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        for(int i = 0; i < num / 1000;i++){
            ans += "M";
        }
        num %= 1000;
        if(num / 900 > 0){
            ans += "CM";
            num %= 900;
        }else if(num /500 > 0){
            ans += "D";
            num %= 500;
        }else if(num /400 > 0){
            ans += "CD";
            num %= 400;
        }
        for(int i = 0; i < num / 100;i++){
            ans += "C";
        }
        num %= 100;
        if(num / 90 > 0){
            ans += "XC";
            num %= 90;
        }else if(num /50 > 0){
            ans += "L";
            num %= 50;
        }else if(num /40 > 0){
            ans += "XL";
            num %= 40;
        }
        for(int i = 0; i < num / 10;i++){
            ans += "X";
        }
        num %= 10;
        if(num / 9 > 0){
            ans += "IX";
            num %= 9;
        }else if(num /5 > 0){
            ans += "V";
            num %= 5;
        }else if(num /4 > 0){
            ans += "IV";
            num %= 4;
        }
        for(int i = 0; i < num;i++){
            ans += "I";
        }
        return ans;
    }
};