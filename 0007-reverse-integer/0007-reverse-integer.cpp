class Solution {
public:
    int reverse(int x) {
        long long int ans=0;
        long long int sign=1;
        if(x<0)
        {
            sign=-1;
        }
        x=abs(x);
        while(x>0){
            ans = ans * 10 + x%10;
            //cout<<ans<<" "<<x%10<<endl;
            x/=10;
            //cout<<x<<endl;
        }
        ans=ans*sign;
        if(ans>INT_MAX || ans<INT_MIN)
        {
            return 0;
        }
        return int(ans);
    }
};