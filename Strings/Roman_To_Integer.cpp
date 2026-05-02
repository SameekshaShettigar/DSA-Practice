class Solution {
public:
    int value(char c){
        if(c == 'I') return 1;
        if(c == 'V') return 5;
        if(c == 'X') return 10;
        if(c == 'L') return 50;
        if(c == 'C') return 100;
        if(c == 'D') return 500;
        return 1000;
    }
    int romanToInt(string s) {
        int num=0;
        for(int i=0 ; i<s.size() ; i++){
            if((i < s.size()-1) && value(s[i]) < value(s[i+1])){
                num -= value(s[i]);
            }
            else{
                num += value(s[i]);
            }
        }
        return num;
    }
};
