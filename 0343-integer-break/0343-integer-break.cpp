class Solution {
public:
    int integerBreak(int n) {
        if(n==2){
            return 1;
        }
        if(n==3){
            return 2;
        }
        int k=n/3;
        if(n%3==0)
        {         
            return pow(3,k);  
        }
        else if((n-1)%3==0)return pow(3,k-1)*4;
        else return pow(3,k)*2;
    }
};