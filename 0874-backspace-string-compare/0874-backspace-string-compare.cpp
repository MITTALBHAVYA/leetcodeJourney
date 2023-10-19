class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=s.size()-1;
        int j=t.size()-1;
        int countS=0,countT=0;
        while(i>=0 || j>=0){
            while(i>=0 && (s[i]=='#' || countS>0)){
                if(s[i]=='#'){
                    countS++;
                    i--;
                }
                else if(countS>0){
                    countS--;
                    i--;
                }
            }
        while(j>=0 && (t[j]=='#' || countT>0)){
            if(t[j]=='#'){
                countT++;
                j--;
            }
            else if(countT>0){
                countT--;
                j--;
            }
        }
        if(i>=0 && j>=0 && s[i]!=t[j]){
            return false;
        }
        if((i>=0 && j<0)||(j>=0 && i<0)){
            return false;
        }
        i--;
        j--;
      }
      return true;
    }
};