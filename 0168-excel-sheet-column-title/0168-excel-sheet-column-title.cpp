class Solution {
public:
    string convertToTitle(int columnNumber) {
        string str="";
        while(columnNumber)
        {
            columnNumber--;
            char c='A'+ columnNumber%26;
            str= c + str;
            columnNumber/=26;
        }
        return str;
    }
};