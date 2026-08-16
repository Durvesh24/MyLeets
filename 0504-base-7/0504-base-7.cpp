class Solution {
public:
    string convertToBase7(int num) {
        string s, sign;
        if(num==0) return "0";
        else if(num<0) sign="-";
        num = abs(num);
    
        while(num!=0){
            s = to_string(num%7) + s;
            num = num/7;
        }
        return sign+s;
    }
};