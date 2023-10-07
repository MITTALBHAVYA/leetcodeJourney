class Solution {
public:
    string intToRoman(int num) {
        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tenths[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hundredth[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thousands[]={"","M","MM","MMM"};
        return thousands[num/1000] + hundredth[(num%1000)/100] + tenths[(num%100)/10]+ ones[(num%10)];
    }
};